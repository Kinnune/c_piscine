/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 13:15:36 by mhintz            #+#    #+#             */
/*   Updated: 2020/02/22 13:25:11 by mhintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y)
{
	int w;
	int h;

	w = x;
	h = y;
	y = 1;
	while (y <= h)
	{
		x = 1;
		while (y <= h)
		{
			if ((x == 1 && y == 1) || (x == 1 && y == h))
                ft_putchar('o');
			else if (x > 1 && x < w && y > 1 && y < h)
                ft_putchar(' ');
			else if ((x == w && y == 1) || (x == w && y == h))
                ft_putchar('|');
			else
                ft_putchar('-');
            x++;
		}
			}
