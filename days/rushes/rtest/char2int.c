/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char2int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 15:55:45 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/16 17:38:10 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     *ft_to_int(char input[])
{
    int i;
    int nbr;

	int output[9];
	i = 0;
    while (input[i] != '\0')
    {
        if (input[i] == '.')
            input[i] =  0;
		else if (input[i] != '.')
		{
			nbr = (input[i] - '0');
	        output[i] = nbr;
		}
		i++;
    }
    return (output);
}

int main(int argv, char **argc)
{
	int i = 0;

	int grid[9][9];
	while (i < 9)
	{
		grid[i] = ft_to_int(argc[i + 1]);
		i++;
	}
	printf("%i", *grid);
}
