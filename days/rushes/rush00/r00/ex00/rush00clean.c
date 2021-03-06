/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkivinie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 12:18:35 by vkivinie          #+#    #+#             */
/*   Updated: 2020/02/22 20:37:21 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	rush(int x_max, int y_max)
{
	int y;
	int x;

	while (y < y_max)
	{
		x = 0;
		while (x < x_max)
		{
			if ((y == 0) && (x == 0 || x + 1 == x_max))
				ft_putchar('A');
			else if ((y + 1 == y_max) && (x == 0 || x + 1 == x_max))
				ft_putchar('C');
			else if ((y == 0 || y + 1 == y_max) || (x == 0 || x + 1 == x_max))
				ft_putchar('B');
			else
				ft_putchar(' ');
			if (x + 1 == x_max)
				ft_putchar('\n');
			x++;
		}
		y++;
	}
}

int		main(void)
{
	rush(4, 4);
	return (0);
}
