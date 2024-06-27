/*ex034-1.c*/
#include <stdio.h>

main()
{
	int i,j;

	printf("êîÇÕ?");
	scanf("%d", &i);

	do
	{
		j = 0;

		do {
			printf("*");
			j++;
		} while (j < 5);

		printf("\n");
		i--;

	} while (i > 0);
}