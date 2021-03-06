/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 14:53:19 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/11 22:38:04 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s2[i] != '\0' && s1[j] != '\0')
	{
		while (s2[i] == s1[j] && s2[i] != '\0' && s1[j] != '\0')
		{
			i++;
			j++;
		}
		return (s1[j] - s2[i]);
	}
	return (s1[0] - s2[0]);
}
