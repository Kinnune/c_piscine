/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 17:46:16 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/13 18:29:14 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int time;

	time = hour;
	if (time < 12 && time < 24 && time > 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %i A.M AND 11 P.M\n", time);
	if (time > 12 && time < 24 && time > 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %i P.M AND 11 P.M\n", time);
	if (time == 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 00 AND 01 A.M\n");
	if (time == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12 P.M AND 13 P.M\n");
	if (time == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 00 AND 01 A.M\n");
}
