/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 00:50:17 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/14 01:38:36 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_president(char *trigger);

void	ft_emergency_alert_system(void);

void	ft_emergency_alert_system(void)
{
	write(1, "Alert!!!\n", 9);
}

void	ft_spy(char *trigger)
{
	if (ft_check_president(trigger) == 1)
		ft_emergency_alert_system();
}

int		ft_check_president(char *trigger)
{
	int i;

	i = 0;
	if (trigger[i] == 'p' && trigger[i + 1] == 'r' )
		i += 2;
	if (trigger[i] == 'e' && trigger[i + 1] == 's' && trigger[i + 2] == 'i')
		i += 3;
	if (trigger[i] == 'd' && trigger[i + 1] == 'e' && trigger[i + 2] == 'n')
		i += 3;
	if (trigger[i] == 't' && trigger[i + 1] == '\0')
		return (1);
	return (0);
}
