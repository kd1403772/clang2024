/*ex041.c*/
#include <stdio.h>

main()
{
	float box[3], sum;
	int i;
	for (i = 0; i < 3; i++) {
		printf("��������́F");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	printf("���v�F%.2f\n\n���ρF%.2f\n", sum, sum / 3);
}