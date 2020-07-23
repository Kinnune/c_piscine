/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_element.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:11:45 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/21 12:12:04 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	t_list *list;
	list = NULL;
	list = ft_create_elem("lolmoi");
	printf("%s",list->data);
	return (0);
}
