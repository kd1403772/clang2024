/*ex038.c*/
#include <stdio.h>

main()
{
	int c;

	printf("整数を入力：");
	scanf("%d", &c);

	if (c >= 10 && c <= 49){
		switch (c/10)
		{
		case 1:printf("10点台です\n");
		break;
		case 2:printf("20点台です\n");
		break;
		case 3:printf("30点台です\n");
		break;
		case 4:printf("40点台です\n");
		}
	}
	else {
		printf("エラー");
	}
}