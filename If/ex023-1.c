/*ex023-1.c*/
#include <stdio.h>

main()
{
	int a, b, c;
	printf("秒数を入力：");
	scanf("%d", &a);
	if (0 < a) {
		if (a >= 5000) {
			printf("エラー");
		}
		else {
			b = a / 3600;
			a = a % 3600;
			c = a / 60;
			a = a % 60;

			printf("%d時間%d分%d秒です", b, c, a);
		}
	}
	else {
		printf("マイナスはエラーです");
	}
}