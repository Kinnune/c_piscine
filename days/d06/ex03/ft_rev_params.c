/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:39:34 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/12 22:56:16 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(char *params)
{
	int i;

	i = 0;
	while (params[i] != '\0')
	{
		ft_putchar(params[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	j = 0;
	i = argc - 1;
	while (i > 0)
	{
		ft_print_params(&argv[i][j]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
