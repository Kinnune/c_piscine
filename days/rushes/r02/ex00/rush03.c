/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 12:13:18 by mhintz            #+#    #+#             */
/*   Updated: 2020/02/22 12:18:26 by mhintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int w;
	int h;

	if (x <= 0 || y <= 0)
		{
			write(1, "error\n", 6);
			return (1);
		}
	else
		w = x;
		h = y;
		y = 1;
	while (y <= h)
	{
			x = 1;
			while (x <= w)
			{
				if ((x == 1 && y == 1) || (x == 1 && y == h))
					ft_putchar('A');
				else if (x > 1 && x < w && y > 1 && y < h)
					ft_putchar(' ');
				else if ((x == w && y == 1) || (x == w && y == h))
					ft_putchar('C');
				else
					ft_putchar('B');
				x++;
			}
			ft_putchar('\n');
			y++;
		}
}
