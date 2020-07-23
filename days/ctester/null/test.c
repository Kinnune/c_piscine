#include <stdio.h>
int main()
{
	char *string = "this is \0 string :)";
	while(*string)
		printf("%c", *string++);
	return (0);
}
