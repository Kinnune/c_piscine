/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 23:59:11 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/14 00:31:53 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int flight_time;

	flight_time = 0;
	while (base != 1)
	{
		if (base % 2 == 0)
		{
			ft_collatz_conjecture(base / 2);
			flight_time + 1;
		}
		else if (base % 2 == 1)
		{
			ft_collatz_conjecture((base * 3) + 1);
			flight_time + 1;
		}
	}
	return (flight_time);
}
