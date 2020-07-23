/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 17:22:27 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/09 17:50:18 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x_max, int y_max)
{
	int x;
	int y;

	y = 0;
	while (y < y_max)
	{
		x = 0;
		while (x < x_max)
		{
			if ((y == 0 || y + 1 == y_max) && (x == 0 || x + 1 == x_max))
				ft_putchar('o');
			else if (y == 0 || y + 1 == y_max)
				ft_putchar('-');
			else if (x == 0 || x + 1 == x_max)
				ft_putchar('|');
			else
				ft_putchar(' ');
			if (x + 1 == x_max)
				ft_putchar('\n');
			x++;
		}
		y++;
	}
}
