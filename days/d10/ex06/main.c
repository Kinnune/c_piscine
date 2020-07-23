/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 22:09:58 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/18 22:10:37 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

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
