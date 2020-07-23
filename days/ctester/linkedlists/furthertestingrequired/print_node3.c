/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_node3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 00:50:20 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/20 18:44:24 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

typedef struct	list
{
	struct 		list *onward;
	int			number;
}				list;

void			ft_print_nodes(list * head)
{
	list 		*temporary;
	temporary = head->onward;
	while (temporary != NULL)
	{
		printf("%i",temporary->number);
		temporary = temporary->onward;
	}

}

void			ft_append_nodes(list *head, int value)
{
		list *new_node;
		new_node = (list*)malloc(sizeof(list));

		if (new_node != NULL)
		{
			new_node->onward = NULL;
			new_node->number = value;
				while (head->onward != NULL)
					head = head->onward;
				head->onward = new_node;
		}
}

int				main(void)
{

	list *head;
	ft_print_nodes(head);
	ft_append_nodes(head, 5);
	ft_append_nodes(head, 100);
	ft_print_nodes(head);
	ft_append_nodes(head, 78);
	ft_print_nodes(head);

	return (0);

}

