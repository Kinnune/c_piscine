/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 14:58:14 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/11 22:23:32 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int i2f;

	while (str[i] != '\0')
	{
		if (str[i] == *to_find)
			str = i;
		while (str[i] == *to_find && str[i] != '\0' && *to_find != '\0')
		{
			i++;
		}
		return (&str[i2f]);
		if (*to_find == '\0')
			return (str);
		i++;
	}
}
