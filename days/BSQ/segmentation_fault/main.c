/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:34:57 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/26 01:07:27 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

// 			map_array[y][x]

int		ft_check_column(int y, int x, int dimentions, char **map)
{
	int tempdim;
	int temp_y;
	int temp_x;
	temp_x = x;
	tempdim = dimentions;
	temp_y = 0;
	while(temp_y < dimentions)
	{	
printf("seg check6");
		if (map[y][temp_x] == map_struct.block)
			return (0);
		if(map[y][temp_x] != map_struct.block)
		{
printf("seg check5");
			temp_x++;
			tempdim--;
		}
		if (tempdim == 0)
		{
printf("seg check4");
			tempdim = dimentions;
			y++;
			temp_y++;
			temp_x = x;
		}
	}
	return (1);
}

void	ft_find_square(int dimentions, char **map)
{
	int x;
	int y;

	y = 0;
	x = 0;
	while (dimentions < map_struct.columns)
	{
		if (y <= map_struct.rows)
	{
printf("seg check1");
//		if (map_struct.empty == map[y][x])
//		{
printf("seg check2");
			if (ft_check_column(y, x, dimentions, map) == 1)
			{
				square_struct.x = x;
				square_struct.y = y;
				square_struct.size = dimentions;
				dimentions += 1;
			}
				printf("seg check7");
		
		if (map[y][x] == '\n')
		{	
printf("seg check3");
			y++;
			x = -1;
		}
	}
		else
			dimentions++;
printf("seg check9");
		x++;
	
	}
//	}
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
	printf("\n columns = %i rows = %i empty = %c block = %c fill = %c \n",map_struct.columns, map_struct.rows, map_struct.empty, map_struct.block, map_struct.fill);
	ft_find_square(1, map2d);
	return (0);
}
