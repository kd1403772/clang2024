#include <stdio.h>

main()
{

	int a, b, work;

	a = 5;
	b = 3;

	work = a;
	a = b;
	b = work;

	printf("a = %d \nb = %d \n", a, b);

}
