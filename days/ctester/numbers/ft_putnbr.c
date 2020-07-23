
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < -9 || nbr > 9)
		ft_putnbr(nbr / 10);
	if (nbr < 0)
	{
		if (nbr > -9)
			ft_putchar('-');
		ft_putchar('0' -  (nbr % 10));
	}
	else ft_putchar('0' + (nbr % 10));
}

int main()

{
	ft_putnbr(-12398974);
	return(0);
}

