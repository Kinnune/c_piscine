/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 15:58:03 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/12 22:45:13 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_program_name(char *name)
{
	int i;

	i = 0;
	while (name[i] != '\0')
	{
		ft_putchar(name[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	argc = 0;
	ft_print_program_name(&argv[0][0]);
	ft_putchar('\n');
	return (0);
}
