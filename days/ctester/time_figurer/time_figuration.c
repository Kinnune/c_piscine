

#include <stdlib.h>
#include <stdio.h>

int main(int arc, char **arv)
{
	int file_time;
	int wanted_time;
	if (arc > 1)
	{
		file_time = atoi(arv[1]);
		wanted_time = atoi(arv[2]);
		printf ("%d", wanted_time - file_time);
	}
	return (0);
}
