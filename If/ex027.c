/*ex027.c*/
#include <stdio.h>

main()
{
	char m;
	printf("��������́F");
	scanf("%c", &m);
	if (m >= 'A' && m <= 'Z') {
		printf("�ϊ�����ƁF%c", m + 0x20);
	}
	else {
		if (m >= 'a' && m <= 'z') {
			printf("�ϊ�����ƁF%c", m - 0x20);
		}
		else {
			printf("�G���[");
		}
	}
}