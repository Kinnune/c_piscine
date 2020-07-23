/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 19:21:42 by jkoskela          #+#    #+#             */
/*   Updated: 2020/02/15 22:50:26 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_trynumb(int *p, int cy, int cx)
{
	while (p < 10)
	{
		ft_checkrow((*p)[cy][cx]);
		if (ft_checkrow = 0)
		{
			if (ft_checkcol = 0)
			{
				if (ft_checknon = 0)
				{
					return (1);
				}
			}
		}
	}
	else
	{
		p++;
		ft_trynumb;
	}
return (0);
}
int		ft_checkrow(int val)
{
	while (*p < 9)
	{
		if ((*p)[cy][cx] != &p)
		{
			
	}
}

int		ft_checkcol()
{
	while (**p < 9)
	{
	}
}

int		ft_checknon()
{
	while (*p < 3 && **p < 3)
	{
	}
}

int		ft_validate()
{
}

int		main()
{
	int array [9][9] = {0, 6, 0,  1, 0, 0,  4, 0, 0,
						0, 0, 5,  0, 0, 0,  0, 0, 0,
						9, 2, 0,  3, 4, 7,  5, 6, 0,
				
						6, 0, 2,  0, 1, 3,  0, 8, 0,
						8, 0, 1,  0, 9, 0,  0, 5, 7,
						0, 0, 0,  0, 0, 2,  0, 1, 0,
					
						1, 5, 0,  4, 0, 9,  0, 3, 2,
						3, 0, 0,  0, 8, 1,  7, 4, 0,
						0, 0, 4,  7, 0, 5,  0, 9, 0,}
	int counterx;
	int countery;
	int (*p)[9][9] = &array; 

	cx = 0;
	cy = 0;
	if (cx == 8 && cy == 8)
	{
		ft_printsudoku((*p)[9][9];
	}
	if (cx > 8)
	{
		cy++;
		cx = 0;
	}
	while (cx <= 8)
	{
		ft_validate((*p)[cy][cx]);
		if (ft_validate == 0)
		{
			ft_trynumb((*p)[cy][cx]); /*return 1,0*/
			if (ft_trynumb == 1)
			{
				cx++;
			}
			else
			{
				cx--;
			}
			ft_checkrow((*p)[cy][cx]);
			ft_checkcol((*p)[cy][cx]);
			ft_checknon((*p)[cy][cx]);
			if (ft_checkrow == 1 && ft_checkcol == 1 && ft_checknon == 1)
			{
				cx++;
			}
			else
			{
				cx--;
			}
		}
		if (ft_validate == 1)
		{
			cx++;
		}
	}		
	return (0);
}
