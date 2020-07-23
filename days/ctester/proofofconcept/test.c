/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:37:56 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/23 17:10:05 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *string1, char *string2)
{
	int i;

	i = 0;
	while (string1[i] != '\0' || string2[i] != '\0')
	{
		if (string1[i] != string2[i])
			return (0);
		i++;
	}
	return (1);
}

#include <unistd.h>
#include <stdio.h>

int main()
{
	char string1[] = {0,9,8,7,6,5,4,3,2,1};
	char string2[10];
	write (, "0987654321", 10);
	read (, string2, 10);

	if (ft_strcmp(string1, string2) == 1)
		printf("strings match!");
	return (0);
}
