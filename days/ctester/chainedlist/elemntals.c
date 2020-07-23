/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elemntals.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 11:59:10 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/21 12:51:33 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct 		node
{
	struct node		*next;
	char 			data;
}					node;


node	*ft_create_element(char *data)
{

	node *new_element;
	
	new_element = malloc(sizeof(node));
	if (new_element)
	{
		new_element->next = NULL;
		new_element->data = data;
	}
	return (new_element);
}
#include <stdio.h>
void	ft_print_elements(node *head)
{
	node *temp;
	temp = head;

	while (head != NULL)
	{
		printf("%s",temp->data);
		temp = temp->next;
	}
}

void	ft_append(node *head, node *toput)
{
	
	if (head->next == NULL)
		ft_create_element(toput);
	else
	{
		while (head->next != NULL)
			head = head->next;
		head->next = toput;
	}

}

int main()
{
	node *head;
	ft_create_element("?");
	ft_append(head, "kuuluu");
	ft_append(head, "sulle");
	ft_append(head, "mits");
	ft_append(head, "moro");
	ft_print_elements(head);
	return (0);
}
