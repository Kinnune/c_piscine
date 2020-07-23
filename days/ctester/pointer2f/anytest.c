/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anytest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:22:25 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/18 20:26:09 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}
