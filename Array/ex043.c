/*ex043.c*/
#include <stdio.h>

main()
{
	char str[] = "orenge";
	int cnt;

	cnt = 0;
	while (str[cnt] != '\0') {
		cnt++;
	}

	printf("������F%s\n", &str[0]);
	printf("�������� %d ����\n", cnt);
}