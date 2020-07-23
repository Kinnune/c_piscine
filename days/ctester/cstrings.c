

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int main(void)
{
	char *ptr;
	char *ptr2;

	ptr2 = "lol";
	ptr = "toto";
	ptr = ptr2;
	ft_putchar(ptr[1]);
	ft_putchar('\n');
	return (0);

}
