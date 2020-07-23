/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 21:01:31 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/13 21:27:05 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] = str[i] + 42 % 26;
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] = str[i] + 42 % 26;
		i++;
	}
	return (str);
}
