/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_node2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 23:07:48 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/20 00:46:59 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct	node
{
	struct 		node *next;
	char 		*string;
}				node;

void	ft_pushback(node *head, char *value)
{
	node *new;
	new = (node*)malloc(sizeof(node));
	if (new != NULL)
	{
		new->string = value;
		new->next = NULL;
		if (head->next == NULL)
			head->next = new;
		while(head->next != NULL)
		{
			head = head->next;
		}
			head->next = new;
	}

}
void	print_nodes(node *head)
{
	node *temp;
	temp = head;
	while (temp != NULL)
	{
		printf("%s", temp->string);
		temp = temp->next;
	}

}


int main()
{

	node *head;

	node node1;
	node node2;
	node node3;
	node1.string = "makke on mies";
	node2.string = "joka ei virheit tee";
	node3.string = "han on fiini fiini mies";
	node1.next = &node2;
	node2.next = &node3;
	node3.next = NULL;
	head = &node1;
	print_nodes(head);
	ft_pushback(head,"!");
	print_nodes(head);


	return (0);
}
