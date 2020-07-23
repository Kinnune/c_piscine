/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkivinie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 12:18:35 by vkivinie          #+#    #+#             */
/*   Updated: 2020/02/09 13:35:04 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

	int ft_putchar (char c)
{
	write(1, &c, 1);
	return(0);
}
	void rush (int x_max, int y_max)
{
	char wall_y = '-';
	char wall_x = '|';
	char corner = 'o';
	char whitespace = ' ';

	int x = 0;
	int y = 0;

	 int is_corner;
    int is_wall_y;
    int is_wall_x;

    while (y < y_max) {
        x = 0;
        while (x < x_max) {

            is_corner = ((y == 0 || y + 1 == y_max) && (x == 0 || x + 1 == x_max));
            is_wall_y = y == 0 || y + 1 == y_max;
            is_wall_x = x == 0 || x + 1 == x_max;

            if (is_corner) {
                ft_putchar(corner);
            }
            else if (is_wall_y) {
                ft_putchar(wall_y);
            }
            else if  (is_wall_x) {
                ft_putchar(wall_x);
            }
            else {
                ft_putchar(whitespace);
            }

            if (x + 1 == x_max) {
                ft_putchar('\n');
            }

            x++;
        }
        y++;
    }
}

int main()
{
    rush(1, -7);
    return 0;
}

