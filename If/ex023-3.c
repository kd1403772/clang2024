/*ex023-3.c*/
#include <stdio.h>

main()
{
	int t, a, b, c;
	printf("���Z�q����́F");
	scanf("%d", &t);

	printf("2�̐�������́F");
	scanf("%d %d", &a, &b);

	if (t == 1) {
		printf("%d", a + b);
	}
	else {
		if (t == 2) {
			printf("%d", a - b);
		}
		else {
			if (t == 3) {
				printf("%d", a * b);
			}
			else {
				if (t == 4) {
					printf("%d", a / b);
				}
				else {
					printf("�G���[");
				}
			}
		}
		


	}

}