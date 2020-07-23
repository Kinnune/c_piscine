/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileopen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:41:43 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/20 16:12:13 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	if (argc == 1)
		write(2, "File name missing.\n", 19);
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (0);
		ret = read(fd, array, BUF_SIZE);
		array[ret] = '\0';
		write(1, &array, (ft_strlen(array)));
		if (close(fd) == -1)
			return (0);
	}
	return (0);
}
