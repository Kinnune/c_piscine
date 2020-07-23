/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 13:29:37 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/18 22:01:04 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

#include <stdio.h>

int main(int argc, char **argv)
{
	int operand1;
	int operand2;
	void (*ft_pointer[5])();

	ft_pointer[0] = ft_addition;
	ft_pointer[1] = ft_subtraction;
	ft_pointer[2] = ft_division;
	ft_pointer[3] = ft_multiplication;
	ft_pointer[4] = ft_modulus;
	operand1 = ft_str2num(argv[1]);
	operand2 = ft_str2num(argv[3]);
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			ft_pointer[0](operand1, operand2);
		if (argv[2][0] == '-')
			ft_pointer[1](operand1, operand2);
		if (argv[2][0] == '/')
			ft_pointer[2](operand1, operand2);
		if (argv[2][0] == '*')
			ft_pointer[3](operand1, operand2);
		if (argv[2][0] == '%')
			ft_pointer[4](operand1, operand2);
	}
return(0);
}
