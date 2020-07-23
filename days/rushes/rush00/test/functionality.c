
#include<unistd.h>

int ft_putchar(char a);


int rush00(int width)
{
	int i;
	i = 1;
	while(i <= width)
	{
		if (i == 1 || i == width)
					ft_putchar('h');
		else
			ft_putchar('s');
			i++;
	}
	return(0);
}

int ft_putchar(char a)
{
	write(1, &a, 1);
	return(0);
}

int main()
{
	rush00(5);
	return(0);
}

