/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 13:03:54 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/27 20:29:15 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
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
	else if(nb >= 10)
		ft_putchar('0' + (nb % 10));
	else
		ft_putchar('0' + nb);
}

int main(int argv, char **argc)
{
	ft_putnbr(10);
	return (0);
}
