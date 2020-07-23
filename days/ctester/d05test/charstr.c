

#include <unistd.h>

int ft_putchar(char a)
{
    write(1, &a, 1);
    return (0);
}

void ft_putstr(char *str)
{
    int	index;
    index = 0;
    while (str[index] != '\0')
    {
        ft_putchar(str[index]);
        index++;
    }
}

int main()
{
    char str1[] = "hello, world!";

    ft_putstr(str1);
}
