/*ex024.c*/
#include <stdio.h>

main()
{
	char m;
	printf("文字を入力：");
	scanf("%c", &m);
	if (m >= 'A' && m <= 'Z') {
		printf("大文字です");
	}
	else {
		printf("そのほかの文字です");
	}
}