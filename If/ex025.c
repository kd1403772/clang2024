/*ex025.c*/
#include <stdio.h>

main()
{
	char m;
	printf("��������́F");
	scanf("%c", &m);
	if ((m >= 'A' && m <= 'Z') || (m >= 'a' && m <= 'z')) {
		printf("�A���t�@�x�b�g�ł�");
	}
	else {
		if (m >= '0' && m <= '9') {
			printf("�����ł�");
		}
		else {
			printf("���̑��̕����ł�");
		}
	}
}