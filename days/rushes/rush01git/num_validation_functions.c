/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_and_prototypes.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 22:59:32 by ekinnune          #+#    #+#             */
/*   Updated: 2020/02/16 23:14:42 by ekinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Runs number trough all validation functions. */
int     ft_checknum(array, y, x, num)
{
    if (ft_checkrow(array, y, num) == 1)
    {
        if (ft_checkcol(array, x, num) == 1)
        {
            if (ft_checknonet(array, y, x, num) == 1)
            {
                return(1);
            }
        }
    }
return (0);
}


/* Checks number at array coordinate against column. */
int     ft_checkcol(int *array, int x, int num)
{
y1 = 0;
while (y1 <= 8)
{
    if (num != *array[y1])
        {
            y1++;
        }
    else
    {
        return (0);
    }
}
    return (1);
}


/* Checks number at array coordinate against corresponding nonet. */
int     ft_checkrow(int *array, int x, int num)
{
x1 = 0;
while (x1 <= 8)
{
    if (num != *array[x1])
        {
            x1++;
        }
    else
    {
        return (0);
    }
}
    return (1);
}


/* Checks number at array coordinate against corresponding nonet. */
int     ft_nonet(int array, int x, int y)
{
int num;

num = &array[y][x];
x1 = x - (x % 3);
y1 = y - (y % 3);
x2 = x1 + 3;
y2 = y1 + 3;

while (y1 <= y2)
{
    if (ft_numcompare(int num, array[y1][x1]) == 1) && x1 < x2)
    {
        x++;
    }
    else if (ft_numcompare(int num, array[y1][x1]) == 1) && x1 == x2)
    {
        y++;
        x = 0;
    }
    else if (ft_numcompare(int num, array[y1][x1]) == 1) && x1 == x2 && y1 == y2)
    {
        return (1);
    }
    else
    {
        return(0);
    }
}




int     ft_checkvalid(int array[y][x])
{
    int arraybool[9][9];
    if ((array[y][x]) > 0 && x < 9)
    {
        arraybool[y][x] = 1;
        x++;
    }
    else if ((array[y][x]) > 0 && x == 9)
    {
        arraybool[y][x] = 0;
        x = 0;
        y++;
    }
return(0);
}
