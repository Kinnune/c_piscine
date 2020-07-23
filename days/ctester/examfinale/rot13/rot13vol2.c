/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13vol2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:48:51 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/27 17:58:48 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rot13(char *string)
{
	int i;

	i = 0;
	while (string[i] != '\0')
	{
		string[i] = (string[i] - 'a' + 13) % 26 + 'a';
		write (1, &string[i], 1);
		i++;
	}
}

int main(int argv, char **argc)
{
	ft_rot13(argc[1]);
	return (0);


}
