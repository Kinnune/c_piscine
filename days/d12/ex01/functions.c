/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:52:33 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/20 19:44:29 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strings_to_string(char **argv)
{
	int index;
	int strindex;
	int strindexcopy;
	char copystring[];

	index = 1;	
	while (argv[index][0] != '>')
	{
		while (argv[index][strindex] != '\0')
		{
			copystring[strindexcopy] = argv[index][strindex];
			strindex++;
			strindexcopy++;
		}
		index++;
		strindex = 0;
	}
	return (copystring);
}

#include <stdio.h>

int main(int argc,char **argv)
{
	if (argc > 1)
	printf("%s",ft_strings_to_string(argv));
	return (0);

}
