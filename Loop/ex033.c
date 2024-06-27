/*ex033.c*/
#include <stdio.h>

main() {
	int data,sum,cnt;
	float ave;

	sum = 0;
	cnt = 0;

	printf("”H");
	scanf("%d", &data);
	for (;data != -999;) {

		sum += data;

		cnt++;

		printf("”H");
		scanf("%d", &data);
	}

	ave = (float)sum / cnt;
	printf("‡Œv%d		•½‹Ï%.2f", sum, ave);
}