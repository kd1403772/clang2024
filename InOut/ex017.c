/*ex015.c*/
#include <stdio.h>

main()
{
	float a,b,c;
	printf("1�ڂ̐����F");
	scanf("%f", &a);
	printf("2�ڂ̐����F");
	scanf("%f", &b);
	printf("3�ڂ̐����F");
	scanf("%f", &c);
	printf("���v=%.2f ����=%.2f", a + b + c, (a + b + c) / 3);

}