/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 22:06:30 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/18 22:11:20 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "prototypes.h"

void	ft_addition(int first, int second)
{
	ft_putnbr(first + second);
	write (1, "\n", 1);
}

void	ft_subtraction(int first, int second)
{
	ft_putnbr(first - second);
	write (1, "\n", 1);
}

void	ft_multiplication(int first, int second)
{
	ft_putnbr(first * second);
	write (1, "\n", 1);
}

void	ft_division(int first, int second)
{
	if (second == 0)
		write(1, "Stop : division by zero", 23);
	else
		ft_putnbr(first / second);
	write (1, "\n", 1);
}

void	ft_modulus(int first, int second)
{
	if (second == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr(first % second);
	write (1, "\n", 1);
}
