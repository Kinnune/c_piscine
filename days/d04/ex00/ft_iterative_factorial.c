/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:33:01 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/09 15:25:59 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int fact = 12;

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int i;
	int duck;

	i = 1;
	duck = 1;
//	if (nb > 12)
//		return (0);
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		duck = i * duck;
		i++;
	}
	return (duck);
}

int main()
{
	fact = ft_iterative_factorial(fact);
		printf("%d", fact);
		return(0);
}
