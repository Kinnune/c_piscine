/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 21:53:42 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/13 22:37:41 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if (i < 0 || j < 0 || k < 0)
		return (0);
	if (i == j || k == i || k == j)
		return (0);
	else if (j > k && j < i)
		return (j);
	else if (k > j && k < i)
		return (k);
	else
		return (j);
}
