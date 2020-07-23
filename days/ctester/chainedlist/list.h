/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:21:36 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/18 15:31:47 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _list_h_
# define _list_h_

typedef	struct s_list t_list;

struct s_list
{
	char *str;
	struct s_list *next;
};

t_list *add-link(t_list *list, char *str);
void	

#endif
