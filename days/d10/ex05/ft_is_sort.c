/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 12:45:25 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/18 19:45:37 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int check;

	check = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			check--;
		if (f(tab[i], tab[i + 1]) > 0)
			check++;
		i++;
	}
	if (check == i || (check * -1) == i)
		return (1);
	else
		return (0);
}
