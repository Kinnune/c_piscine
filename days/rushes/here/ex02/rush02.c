/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 22:11:18 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/09 22:20:58 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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
			else if (y == 0 || y + 1 == y_max)
				ft_putchar('B');
			else if (x == 0 || x + 1 == x_max)
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
