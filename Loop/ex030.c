/*ex030.c*/
#include <stdio.h>

main()
{
	int k, u;

	printf("数を入れて：");
	scanf("%d", &k);

	u = 0;
	while (u <= 10) {
		printf("%d+%d=%d\n", k, u, k + u);
		u++;
	}
}