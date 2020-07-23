/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 04:46:14 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/14 14:10:37 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char *ft_strcpy(char *dest, char *src,int two)
{
	int i;

	i = 0;
	if (dest > src)
		return (0);
	while (dest[i] != '\0' && src[i] != '\0' && two != 0)
	{
		dest[i] = src[i];
		i++;
		two--;
	}	
	return (&dest[0]);
}

int main()
{
	char dest[] = "123456";
	char src[] = "abcdefg1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111h";
	printf("%s\n",ft_strcpy(dest,src,2));
	return (0);

}
