/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 19:32:57 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/23 23:22:26 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_file.h"

int main()
{
	int filelen;
	int i;
	int width;
	int height;
	char readchar[1];
	char *readresult;
	
	t_links *head;
	i = 1;
	filelen = 0;
	while(i > 0)
	{
		i = read(0, readchar, 1);
		ft_list_append(&head, &readchar[0]);
		filelen++;
	}
	readresult = malloc(sizeof(char*)*(filelen));
	if (!readresult)
		return (0);
	height = ft_count_newlines(head);
	width = ((filelen - (height + 1)) / height);
	readresult = ft_links_to_string(readresult, head);
	i = 0;
	while (readresult[i] != '\0')
	{
		i++;
	}
	char *resultstr = malloc(sizeof(char*)*(height * width));
	ft_rush00_check(readresult, ft_rush00_string(width, height, resultstr), width, height);
	ft_rush02_check(readresult, ft_rush02_string(width, height, resultstr), width, height);
	ft_rush04_check(readresult, ft_rush04_string(width, height, resultstr), width, height);
	return (0);
}
