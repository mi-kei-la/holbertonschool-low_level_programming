#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char **argv)
{
	int x, a, b;

	if (argc != 4)
	{
		printf("Error");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	x = get_op_func(argv[2])(a, b);
	printf("%d\n", x);
	return (0);

}
