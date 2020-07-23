/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_and_convert.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 22:08:35 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/18 22:09:28 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "prototypes.h"

int		ft_str2num(char *string)
{
	int value;
	int i;

	i = 0;
	value = 0;
	while (string[i] != '\0')
	{
		if ((string[i] >= '0') && (string[i] <= '9'))
		{
			value += string[i] - '0';
			value *= 10;
		}
		i++;
	}
	return (value /= 10);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < -9 || nb > 9)
		ft_putnbr(nb / 10);
	if (nb < 0)
	{
		if (nb >= -9)
			ft_putchar('-');
		ft_putchar('0' - (nb % 10));
	}
	else
		ft_putchar('0' + (nb % 10));
}
