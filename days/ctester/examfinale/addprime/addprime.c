/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addprime.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:18:38 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/27 21:33:47 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str2nbr(char *string)
{
	int i;
	int number;

	number = 0;
	i = 0;
	while (string[i] && string[i] >= '0' && string[i] <= '9')
	{
		if (string[i] <= '9' || string[i] >= '0')
		{
			number += string[i] - '0';
			number *= 10;
		}
		i++;
	}
	return (number / 10);
}

int	ft_check_prime(number)
{
	int counter;

	counter = number - 1;
	while(counter > 1)
	{
		if (number % counter == 0)
			return(0);
		counter--;
	}
	return (1);
}

int	ft_addprime(source)
{
	int number;
	while(source)
	{
		if (ft_check_prime(source) == 1)
			number += number;
		else
			source--;
	}
	return (number);
}

#include <stdio.h>

int main(int argc, char **argv)
{

//	printf ("%i",ft_str2nbr(argv[1]));
//	ft_addprime(ft_str2nbr(argv[1]));
	printf("%i", ft_check_prime(101));
	return (0);

}
