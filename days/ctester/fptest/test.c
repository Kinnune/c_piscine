/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 21:10:38 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/17 21:50:23 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include <stdio.h>

int ft_isbigger(int i)
{
	if (i > 1)
		return (1);
	else
		return(0);
}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;

	int *rvalues;
	rvalues = (int*)malloc(sizeof(tab) * length);
	i = 0;
	while (i < length)
	{
	rvalues[i] = f(tab[i]);
		i++;
	}
	printf("%i",rvalues[0]);
	return (rvalues);
}

int main()
{
	int array[] = {1,2,1,2,1,0};
	ft_map(array, 7, ft_isbigger);
	return (0);
}
