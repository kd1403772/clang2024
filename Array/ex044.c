/*ex044.c*/
#include <stdio.h>

main()
{
	char moji1[80], moji2[80], w[80];
	int i;

	printf("������P����́F");
	scanf("%s", &moji1[0]);

	printf("������Q����́F");
	scanf("%s", &moji2[0]);

	printf("moji1 = %s \t moji2 = %s\n", &moji1[0], &moji2[0]);
	printf("����ւ����\n");
	for (i = 0; w[i] = moji1[i]; i++);
	for (i = 0; moji1[i] = moji2[i]; i++);
	for (i = 0; moji2[i] = w[i]; i++);
	printf("moji1 = %s \t moji2 = %s\n", &moji1[0], &moji2[0]);
}