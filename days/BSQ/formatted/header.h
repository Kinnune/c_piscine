/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:37:23 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/25 18:42:23 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

struct			s_map
{
	int			columns;
	int			rows;
	char		empty;
	char		block;
	char		fill;
};

struct			s_found
{
	int			x;
	int			y;
	int			size;
};

struct s_found square_struct;

struct s_map map_struct;

void	ft_map_characters(int filedes);

int		ft_count_map(int filedes, char *map_name);

int		ft_loop_first_line(char *map_name);

char 	**ft_funky_mallocation(char *map_name);

#endif
