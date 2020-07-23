/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rectest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 13:54:01 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/16 15:18:40 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_row(char nbr, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == nbr)
			return (0);
		else if (nbr != str[i])
			i++;
	}
	return (1);
}

//put a number in the string noted by . if the number does not violate constraints return the string
ft_recursive(char number, char *str)
{
	
	while (str)
	{
		if (str[i] == '.' && ft_row(number, &str) == 1)

	}
}




int main(int argv, char **argc)
{
	char nbrstr[] = "1401998726987";
	printf("%i",ft_row ('5', nbrstr));
	return (0);
}
