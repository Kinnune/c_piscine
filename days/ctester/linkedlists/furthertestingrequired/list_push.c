/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 21:35:45 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/19 22:25:14 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list  *list_end;
	list_end = *begin_list;

	if (!list_end)
		list_end = ft_create_elem(data);
	while (list_end->next != NULL)
	{
		list_end = list_end->next;
	}
	list_end = ft_create_elem(data);
}

int main()
{
	return (0);
}
