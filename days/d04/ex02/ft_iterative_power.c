/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 17:04:44 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/08 21:49:49 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	result = 1;
	i = 1;
	if (power < 0)
		return (0);
	while (i <= power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
