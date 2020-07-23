/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header_file.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 19:22:44 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/23 22:18:46 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_FILE_H
# define HEADER_FILE_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_links
{
	struct s_links	*next;
	char			data;
}					t_links;

void	ft_rush00_check(char *string1, char *string2, int width, int height);
void	ft_rush01_check(char *string1, char *string2, int width, int height);
void	ft_rush02_check(char *string1, char *string2, int width, int height);
void	ft_rush03_check(char *string1, char *string2, int width, int height);
void	ft_rush04_check(char *string1, char *string2, int width, int height);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_count_newlines(t_links *head);
void	ft_print_nodes(t_links *head);
void 	ft_list_append(t_links **begin_list, char *data);
t_links	*ft_create_elem(char *data);
int		ft_strcmp(char *string1, char* string2);
char 	*ft_links_to_string(char *str, t_links *head);
void	ft_putchar(char c);
char	*ft_rush00_string(int x_max, int y_max, char *resultstr);
char	*ft_rush01_string(int x_max, int y_max, char *resultstr);
char	*ft_rush02_string(int x_max, int y_max, char *resultstr);
char	*ft_rush03_string(int x_max, int y_max, char *resultstr);
char	*ft_rush04_string(int x_max, int y_max, char *resultstr);
void	ft_rush00(int x, int y);
void	ft_rush01(int x, int y);
void	ft_rush02(int x_max, int y_max);
void	ft_rush03(int x, int y);
void	ft_rush04(int x_max, int y_max);
int		ft_convert_to_int(char *string);

#endif
