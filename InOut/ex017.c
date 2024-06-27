/*ex015.c*/
#include <stdio.h>

main()
{
	float a,b,c;
	printf("1つ目の整数：");
	scanf("%f", &a);
	printf("2つ目の整数：");
	scanf("%f", &b);
	printf("3つ目の整数：");
	scanf("%f", &c);
	printf("合計=%.2f 平均=%.2f", a + b + c, (a + b + c) / 3);

}