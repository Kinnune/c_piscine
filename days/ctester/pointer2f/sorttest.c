/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorttest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 19:08:45 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/18 19:44:31 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	comparator(int a, int b)
{
	if (a < b)
		return (1);
	else
		return (0);
}

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

int main()
{
	int numbers[] = {1,2,3,4,5};
	printf("%i",ft_is_sort(numbers, 5, comparator));
	return(0);

}
