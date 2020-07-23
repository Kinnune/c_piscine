/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 17:26:54 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/26 23:27:46 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_map_len(char *map)
{
	int filedes;
	int size_of_map;
	ssize_t read_succes;
	char map_array[1024];

	filedes = open(map, O_RDONLY);
	read_succes = 1;
	while (read_succes > 0)
	{
		read_succes = read(filedes, map_array, 1024);
		size_of_map += read_succes;
	}
	close(filedes);
	return (size_of_map);
}

char	*ft_map_to_array(char *map, int map_size)
{
	char *map1d;
	int filedes;
	int last_index;

	filedes = open(map, O_RDONLY);
	map1d = (char *)malloc(sizeof(char)*(map_size + 1));
	if (!map1d)
		return (map1d);
	last_index = read(filedes, map1d, map_size);
	map1d[last_index] = '\0';
	return (map1d);
}

void	ft_map_struct_assign(char *map)
{
	int i;
	int first_line_len;
	int new_line_count;

	new_line_count = 0;
	i = 0;
	while (map[i] != '\n')
		i++;
	map_struct.fill = map[i - 1];
	map_struct.block = map[i - 2];
	map_struct.free = map[i - 3];
	first_line_len = i;
	i++;
	while (map[i] != '\n')
		i++;
	map_struct.columns = (i - first_line_len);
	while (map[i] != '\0')
	{
		if (map[i] == '\n')
			new_line_count++;
		i++;
	}
	map_struct.rows = new_line_count;
}
