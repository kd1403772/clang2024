/*ex038.c*/
#include <stdio.h>

main()
{
	int c;

	printf("��������́F");
	scanf("%d", &c);

	if (c >= 10 && c <= 49){
		switch (c/10)
		{
		case 1:printf("10�_��ł�\n");
		break;
		case 2:printf("20�_��ł�\n");
		break;
		case 3:printf("30�_��ł�\n");
		break;
		case 4:printf("40�_��ł�\n");
		}
	}
	else {
		printf("�G���[");
	}
}