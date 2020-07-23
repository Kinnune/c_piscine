/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 11:31:05 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/14 02:00:23 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *str;
	int i;
	int difference;

	if (min >= max)
	{
		return (0);
	}

	i = 0;
	difference = max - min;
	str = malloc(sizeof(min)* difference);
	while (i < difference)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
