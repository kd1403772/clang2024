/*ex018.c*/
#include <stdio.h>

main()
{
	int a, b, c,go;
	float he;
	printf("������3���́F");
	scanf("%d %d %d", &a, &b, &c);
	go = a + b + c;
	he = go / 3;
	printf("���v=%d  ����=%.2f\n",go,he);
}