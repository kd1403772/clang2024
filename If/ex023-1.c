/*ex023-1.c*/
#include <stdio.h>

main()
{
	int a, b, c;
	printf("�b������́F");
	scanf("%d", &a);
	if (0 < a) {
		if (a >= 5000) {
			printf("�G���[");
		}
		else {
			b = a / 3600;
			a = a % 3600;
			c = a / 60;
			a = a % 60;

			printf("%d����%d��%d�b�ł�", b, c, a);
		}
	}
	else {
		printf("�}�C�i�X�̓G���[�ł�");
	}
}