/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 14:40:09 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/11 22:17:05 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int result;
	int i;
	int sign;

	sign = 1;
	i = 0;
	result = 0;
	while (str[i] <= ' ')
	{
		i++;
	}
	if (str[i] == '+' && str[i + 1] != '-' && str[i + 1] != '+')
		i++;
	if ((str[i] < '0' || str[i] > '9') && str[i] > 32 && str[i])
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (str[i - 1] == '-')
			sign = -1;
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}
