/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 15:18:05 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/22 15:58:55 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include<stdio.h>

int main(int argc, char **argv)
{
	char array[10000];

	read (0, array, 100);

	printf ("%s",array);
	return (0);

}
