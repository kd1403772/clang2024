/*ex029.c*/
#include <stdio.h>

main()
{
	int s, m;
	printf("数を入れて：");
	scanf("%d", &s);

	m = 0;
	while (m < s) {
		printf("*");
		m++;
	}
}