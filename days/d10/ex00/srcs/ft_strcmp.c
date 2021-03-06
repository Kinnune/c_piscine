/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 12:47:10 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/12 13:08:07 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0' && s1[i] != '\0')
	{
		while (s2[i] == s1[i] && s2[i] != '\0' && s1[i] != '\0')
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
	return (s1[0] - s2[0]);
}
