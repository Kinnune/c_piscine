/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 23:17:19 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/16 23:31:57 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int  ft_strlen(char string)
{
    int i;
    i = 0
    while (string[i] != '\0')
    {
        i++;
    }
    return (i);
}



int     ft_sudoku(int array[y][x], int num)
 
	while (x < 9 && y < 9)
	{
	   	if ((array[y][x]) > 0 && x < 9)
	    {
	        x++;
	    }
	    else if ((array[y][x]) > 0 && x == 9)
	    {
	        x = 0;
	        y++;
	    }
	    if ((array[y][x]) == 0 && x < 9)
	    {
	        if (ft_checknum((array, y, x, num) == 1 && x < 9))
	        {
	            (array[y][x]) = num;
	            x++;
	        }
	        else if (ft_checknum((array, y, x, num) == 1 && x == 9))
 	       {
 	           (array[y][x]) = num;
 	           x = 0;
	            y++;
	        }
	        else if (ft_checknum((array, y, x, num) == 0 && x < 9))
	        {
	            x--;
	        }
	        else if (ft_checknum((array, y, x, num) == 0 && x == 9))
	        {
	            x = 8;
	            y--;
	        }
	        else
	        {
	            return(1);
	        }
	    ft_sudoku(array, y, x);
	    }
	ft_printarray(array, y, x);
	return (0);
	}



int  **ft_convert(char **argv)
{
    int x;
    int y;
    int **grid;

	grid = (int **)malloc(sizeof(int *) * 9);
    x = 0;
    while (x < 9)
    {
        if (ft_strlen(argv[x]) != 9)
            return (0);
        grid[x] = (int *)malloc(sizeof(int) * 9);
        y = 0;
        while (y < 9)
        {
            if (argv[x][y] == '.')
                grid[x][y] = 0;
            else if (argv[x][y] >= '1' && argv[x][y] <= '9')
                grid[x][y] = argv[x][y] - '0';
            else
                return (0);
            y++;
        }
        x++;
    }
    return (grid);
}



int     ft_numcompare(int num, int j)
	{
	if (num != j)
	    return (1);
	else
		return (0);
	}



void    ft_printsudoku(int **array, int y, int x)
{
    int  y;
    int  x;
    char c;

    c = "0"
    y = 0;
    x = 0;
    while (y <= 9)
    {
        c = (c + matrix[y][x]);
        if (x < 9)
        {
            write(1, &c, 1);
            x++;
        }
        else
            x = 0;
            y++;
            write(1, "\n", 1);
    }
}

