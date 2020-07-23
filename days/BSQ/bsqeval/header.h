/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 17:23:13 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/26 23:26:56 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

struct			s_map
{
	int			columns;
	int			rows;
	int			box_index;
	int			box_size;
	char		free;
	char		block;
	char		fill;
};

struct s_map map_struct;

void	ft_map_struct_assign(char *map);

char	*ft_map_to_array(char *map, int map_size);

int	ft_map_len(char *map);

#endif
