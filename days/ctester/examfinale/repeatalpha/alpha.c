/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 13:02:56 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/27 15:57:10 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_repeat_alpha(char *string)
{
	int i;
	int repeater;
	char placeholderchar[1];

	repeater = 0;
	i = 0;
	while (string[i])
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			placeholderchar[0] = string[i];
			repeater = string[i] - 'a';
			while (repeater >= 0)
			{
				
				write(1, placeholderchar, 1);
				repeater--;
			}
		}	
	i++;	
	}
		if (string[i] >= 'A' && string[i] <= 'Z')
		{
			placeholderchar[0] = string[i];
			repeater = string[i] - 'a';
			while (repeater >= 0)
			{
				write(1, placeholderchar, 1);
				repeater--;
			}
		}
}


int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		return (0);

	while (argc > 1)
	{
		ft_repeat_alpha(argv[i]);
		i++;	
		argc--;
	}
	return (0);
}
