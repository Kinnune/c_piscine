/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 17:12:57 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/25 15:31:43 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

struct			s_map
{
	int			columns;			
	int			rows;
	char		empty;
	char		block;
	char		fill;
};

struct s_map map_struct;

void	ft_map_characters(int filedes)
{
	char read_char[1];
	int read_succes;
	int char_counter;

	char_counter = 0;
	read_char[0] = '0';
	while (*read_char >= '0' && *read_char <= '9')
	{
		read(filedes, read_char, 1);
	}
	map_struct.empty = read_char[0];
	read(filedes, read_char, 1);
	map_struct.block = read_char[0];
	read(filedes, read_char, 1);
	map_struct.fill = read_char[0];
	read(filedes, read_char, 1);	
	while (read_succes > 0)
	{
		read_succes = read(filedes, read_char, 1);	
		char_counter++;
	}	
	map_struct.columns = (char_counter / map_struct.rows);
	close(filedes);
}

int	ft_count_map(int filedes, char *map_name)
{
	int readsucces;
	char placeholderchar[1];
	int map_length;

	map_struct.rows = -2;
	map_length = 0;
	readsucces = 1;
	while (readsucces > 0)
	{
		readsucces = read(filedes, placeholderchar, 1);
		map_length++;
		if (*placeholderchar == '\n')
			map_struct.rows++;
	}
	close(filedes);
	open(map_name, O_RDONLY);
	return (map_length);
}

int	ft_loop_first_line(char *map_name)
{
	int filedes;
	char read_char[1];
	filedes = open(map_name, O_RDONLY);
	while (read_char[0] != '\n')
	{
		read(filedes, read_char, 1);
	}
	read(filedes, read_char, 1);
	return (filedes);
}

char 	**ft_funky_mallocation(char *map_name)
{
	char **map_array;
	char read_char[1];
	int filedes;
	int i;
	int j;
	int read_succes;

	read_succes = 1;
	j = 0;
	filedes = ft_loop_first_line(map_name);
	map_array = malloc(sizeof(char*)*map_struct.rows);
	while (read_succes > 0)
	{
		i = 0;
		map_array[j] = malloc(sizeof(char*)*map_struct.columns);
		while (map_array[j][i - 1] != '\n')
		{
			read_succes = read(filedes, read_char, 1);
			map_array[j][i] = read_char[0];
			i++;
		}
		j++;
	}
	return(map_array);
}

int main(int argc, char **argv)
{
	char **map2d;
	int charamount;
	int filedes;
	filedes = open(argv[1], O_RDONLY);
	printf("%i\n", ft_count_map(filedes, argv[1]));
	ft_map_characters(filedes);
	map2d = ft_funky_mallocation(argv[1]);
	printf("\n columns = %i rows = %i empty = %c block = %c fill = %c \n",map_struct.columns, map_struct.rows,
		   																	map_struct.empty, map_struct.block, map_struct.fill);
	return (0);
}
