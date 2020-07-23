/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:45:53 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/21 22:33:52 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_btree.h"

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	applyf(root->item);
	if (root->left != NULL)
		btree_apply_prefix(root->left, applyf);
	if (root->right != NULL)
		btree_apply_prefix(root->right, applyf);
}

t_btree	*btree_create_node(void *item)
{
	t_btree *new_node;

	new_node = malloc(sizeof(t_btree));
	if (new_node)
	{
		new_node->item = item;
		new_node->right = NULL;
		new_node->left = NULL;
	}
	return (new_node);
}


int main()
{
	t_btree *head;
	t_btree* fstleafleft = btree_create_node("i am 1st leaf on the right");
	t_btree* fstleafright = btree_create_node("i am 1st leaf on the left");
	t_btree* rightrightleaf = btree_create_node("i am the right child of 1st leaf on the right");
	head->left = fstleafleft;
	head->right = fstleafright;
	fstleafright->right = rightrightleaf;
	btree_apply_prefix(head, (*ft_putstr));
	return (0);
}
