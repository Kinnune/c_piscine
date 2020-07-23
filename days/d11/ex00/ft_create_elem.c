/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:40:07 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/19 19:17:57 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *new_element;

	new_element = malloc(sizeof(t_list));
	if (new_element)
	{
		new_element->data = data;
		new_element->next = NULL;
	}
	return (new_element);
}
