/*ex034-5.c*/
#include <stdio.h>

main()
{
	int a, b, c;
	
	printf("”‚ÍH");
	scanf("%d", &c);

	for (a = 0; a < c; a++) {
		for (b = 0; b < c - a - 1; b++) {
			printf(" ");
		}
		for (b = 0; b < a + 1; b++) {
			printf("*");
		}
		printf("\n");
	}

}