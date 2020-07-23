/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat_copy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:32:31 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/20 17:52:41 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 4096

int		ft_strlen(char *string)
{
	int i;

	i = 0;
	while (string[i] != '\0')
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	array[BUF_SIZE + 1];
	int		index;

	index = 1;
	while (argv[index])
	{
		if (argv[index][0] == '>')
		{
			printf("it was found");
			


		}
		argv++;	
	}
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	if (argc > 2)
	{
		while (argv)
		{
			fd = open(argv[index], O_RDONLY);
			if (fd == -1)
				return (0);
			ret = read(fd, array, BUF_SIZE);
			array[ret] = '\0';
			write(1, &array, (ft_strlen(array)));
			if (close(fd) == -1)
				return (0);
			argv++;
		}
	}
	return (0);
}
