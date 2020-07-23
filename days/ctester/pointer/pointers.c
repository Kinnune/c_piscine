


#include <stdio.h>

int main()
{

int a;

a = 10;

int *pointer;

pointer = &a;

printf("%d\n%d\n", a, *pointer );

a = 12;

*pointer += 2;

printf("%d\n", *pointer);

return (0);

}
