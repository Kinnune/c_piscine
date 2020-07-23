/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 17:12:57 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/27 18:46:12 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_string_test(char *map)
{
	int box_horizontal;
	int box_vertical;
	int temp_x;
	int box_size;
	int x;

	x = 0;
	box_size = 1;
	box_horizontal = 1;
	box_vertical = 1;
	while (map[x] != '\0')
	{
		temp_x = x;
		while (map[temp_x] == map_struct.free && box_size < map_struct.columns)
		{
			if (box_horizontal == box_size)
			{
				box_horizontal = 1;
				temp_x += (map_struct.columns - box_size);
				box_vertical++;
			}
			if (box_vertical == box_size)
			{
				map_struct.box_index = x;
				map_struct.box_size = box_size;
				box_size++;
				temp_x = x - 1;
				box_vertical = 1;	
				box_horizontal = 1;
			}
			temp_x++;
			box_horizontal++;
		}
	x++;
	}
}
#include <stdio.h>
int main(int argc, char **argv)
{
	char *map1d;
	int maplen;
	
	maplen = ft_map_len(argv[1]);
	map1d = ft_map_to_array(argv[1], maplen);
	ft_map_struct_assign(map1d);
	ft_string_test(map1d);
	printf("%s", map1d);
	printf("\n%i\n%i\n", map_struct.box_size, map_struct.box_index);
	return (0);
}
