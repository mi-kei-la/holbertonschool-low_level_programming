#include <stdio.h>

int main(void)
{
	int a = 8;
	int b = 63;

	int a2 = a;
	int b2 = b;

	printf("a2 is %d, b2 is %d. a is %d, b is %d\n", a2, b2, a, b);

	a = b2;
	b = a2;

	printf("a2 is %d, b2 is %d. a is %d, b is %d\n", a2, b2, a, b);
	return (0);
}
