/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 16:36:43 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/12 22:41:06 by ekinnune         ###   ########.fr       */
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
	int joo;

	joo = argc;
	i = 1;
	if (argc > 1)
		while (argv[i] != '\0')
		{
			ft_print_params(argv[i]);
			ft_putchar('\n');
			i++;
		}
	return (0);
}
