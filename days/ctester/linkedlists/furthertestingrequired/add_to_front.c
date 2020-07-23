/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 01:09:43 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/20 18:56:15 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

typedef struct node
{
	struct node *plus;
	char *message;

}	node;

/*
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
*/

void		ft_print_node(node *head)
{
	node *temp;
	temp = head->plus;

	while (temp != NULL)
	{	
		printf("%s", temp->message);
		temp = temp->plus;
	}
}

void		ft_node_start(node *head, char *string)
{
	node *new1st;
	new1st = (node*)malloc(sizeof(node));
	if (new1st)
	{
		new1st->message = string;
		if (head->plus == NULL)
		{
			new1st->plus = NULL;
			head->plus = new1st;
		}
		else
			new1st = head->plus;
			head->plus = new1st;
	}
}

int main()
{
	node *head;
	ft_node_start(head, "kuuluu");
	ft_print_node(head);
	ft_node_start(head, "mita");
	ft_print_node(head);
	ft_node_start(head, "moro");
	ft_print_node(head);
	return (0);

}
