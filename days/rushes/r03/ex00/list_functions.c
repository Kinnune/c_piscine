/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 19:02:38 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/23 21:36:23 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_file.h"

t_links		*ft_create_elem(char *data)
{
	t_links *new_element;

	new_element = malloc(sizeof(t_links));
	if (new_element)
	{
		new_element->data = data[0];
		new_element->next = NULL;
	}
	return (new_element);
}

void		ft_list_append(t_links **begin_list, char *data)
{
	t_links *list_end;

	list_end = *begin_list;
	if (list_end == NULL)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (list_end->next)
		list_end = list_end->next;
	list_end->next = ft_create_elem(data);
}

char		*ft_links_to_string(char *str, t_links *head)
{
	int i;
	if (str)
	{
		t_links *temporary = head;
		i  = 0;
		while(temporary->next != NULL)
		{
			str[i] = temporary->data;
			temporary = temporary->next;
			i++;
		}
	}
	return (str);
}

int			ft_count_newlines(t_links *head)
{
	int height;

	height = -1;
	t_links *temp;
	temp = head;
	while (temp != NULL)
	{
		if (temp->data == '\n')
			height++;
		temp = temp->next;
	}
	return (height);
}

void			ft_print_nodes(t_links *head)
{
	char c;
	t_links 	*temporary;
	temporary = head;
	while (temporary != NULL)
	{
		c = temporary->data;
		write(1, &c, 1);
		temporary = temporary->next;
	}

}
