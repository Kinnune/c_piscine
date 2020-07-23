/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 12:30:31 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/18 20:28:12 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int true_counter;

	i = 0;
	true_counter = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			true_counter++;
		i++;
	}
	return (true_counter);
}
