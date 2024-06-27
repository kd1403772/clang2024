/*1102034kadai42.c*/
#include <stdio.h>

main()
{
	int k = 1, j = 0;
	while (j <= 300) {
		printf("%d+", k);
		j += k;
		k++;
	}
	printf("\b=%d\n", j);

}