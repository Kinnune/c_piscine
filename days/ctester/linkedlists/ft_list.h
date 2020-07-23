/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:12:23 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/19 20:11:54 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
#include	<stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list	*ft_create_elem(void *data)
{
	t_list *new_element;

	new_element = malloc(sizeof(t_list));
	if (new_element)
	{
		new_element->data = data;
		new_element->next = NULL;
		return (new_element);
	}
	return (NULL);
}

#endif
