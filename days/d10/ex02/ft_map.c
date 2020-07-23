/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 20:49:26 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/18 20:20:32 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
	return (rvalues);
}
