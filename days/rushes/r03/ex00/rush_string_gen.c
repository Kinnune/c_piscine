/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00_and_str_funcs.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 19:56:27 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/23 23:21:29 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_file.h"

char    *ft_rush00_string(int x_max, int y_max, char *resultstr)
{
	int x;
	int y;
	int i;

	i = 0;
	y = 0;
	while (y < y_max)
	{
		x = 0;
		while (x < x_max)
		{
			if ((y == 0 || y + 1 == y_max) && (x == 0 || x + 1 == x_max))
				resultstr[i] = 'o';
			else if (y == 0 || y + 1 == y_max)
				resultstr[i] = '-';
			else if (x == 0 || x + 1 == x_max)
				resultstr[i] = '|';
			else
				resultstr[i] = ' ';
			if (x + 1 == x_max)
			{
				resultstr[i + 1] = '\n';
				i++;
			}
			x++;
			i++;
		}
		y++;
	}
	return (resultstr);
}

char    *ft_rush02_string(int x_max, int y_max, char *resultstr)
{
	int y;
	int x;
	int i;

	i = 0;
	y = 0;
	while (y < y_max)
	{
		x = 0;
		while (x < x_max)
		{
			if ((y == 0) && (x == 0 || x + 1 == x_max))
				resultstr[i] = 'A';
			else if ((y + 1 == y_max) && (x == 0 || x + 1 == x_max))
				resultstr[i] = 'C';
			else if (y == 0 || y + 1 == y_max)
				resultstr[i] = 'B';
			else if (x == 0 || x + 1 == x_max)
				resultstr[i] = 'B';
			else
				resultstr[i] = ' ';
			if (x + 1 == x_max)
			{
				resultstr[i + 1] = '\n';
				i++;
			}	
			x++;
			i++;
		}
		y++;
	}
	return (resultstr);
}


char    *ft_rush04_string(int x_max, int y_max, char *resultstr)
{
    int x;
    int y;
	int i;

	i = 0;
	y = 0;
	while (y < y_max)
	{
		x = 0;
		while (x < x_max)
		{
			if ((y == 0 && x == 0) || (y + 1 == y_max && x + 1 == x_max))
				resultstr[i] = 'A';
			else if ((y == 0 && x + 1 == x_max) || (x == 0 && y + 1 == y_max))
				resultstr[i] = 'C';
			else if ((x == 0 || x + 1 == x_max) || (y == 0 || y + 1 == y_max))
				resultstr[i] = 'B';
			else
				resultstr[i] = ' ';
			if (x + 1 == x_max)
			{
				resultstr[i + 1] = '\n';
				i++;
			}
			x++;
			i++;
		}
		y++;
	}
	return (resultstr);
}

int		ft_strcmp(char *string1, char* string2)
{
	int i;

	i = 0;
	while (string1[i] != '\0' && string2[i] != '\0')
	{
		if (string1[i] != string2[i])
			return (0);
		i++;
	}
	return (1);
}
