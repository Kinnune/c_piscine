/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:25:42 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/19 23:07:38 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct	node
{
	struct		node *forward;
	int			number;
}				node;

void	ft_printlist(node *head)
{
	node *temp;
	temp = head;
	while (temp != NULL)
	{
		printf("%i", temp->number);
		temp = temp->forward;
	}
}

int main()
{
	node *head;
	node node1;
	node node2;
	node node3;
	node1.number = 5;
	node2.number = 9;
	node3.number = 0;
	node1.forward = &node2;
	node2.forward = NULL;
	node3.forward = &node1;
	head =  &node3;
	ft_printlist(head);
	return (0);
}
