/*ex023-2.c*/
#include <stdio.h>

main()
{
	int t;
	printf("�������́F");
	scanf("%d", &t);
	if (t % 400 == 0) {
		printf("���邤�N�ł�");
	}
	else {
		if (t % 4 == 0) {
			if (t % 100 != 0) {
				printf("���邤�N�ł�");
			}
			else {
				printf("���邤�N�ł͂Ȃ�");
			}
		}
		else {
			printf("���邤�N�ł͂Ȃ�");
		}
		


	}

}