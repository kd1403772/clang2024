/*ex023-2.c*/
#include <stdio.h>

main()
{
	int t;
	printf("西暦を入力：");
	scanf("%d", &t);
	if (t % 400 == 0) {
		printf("うるう年です");
	}
	else {
		if (t % 4 == 0) {
			if (t % 100 != 0) {
				printf("うるう年です");
			}
			else {
				printf("うるう年ではない");
			}
		}
		else {
			printf("うるう年ではない");
		}
		


	}

}