/*ex034-1.c*/
#include <stdio.h>

main()
{
	int i;

	printf("����?");
	scanf("%d", &i);

	do {
		printf("*****\n");
		i--;
	} while (i > 0);
}