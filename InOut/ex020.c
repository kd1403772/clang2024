/*ex020.c*/
#include <stdio.h>

main()
{
	char moji;
	printf("����������́F%C");
	scanf("%c", &moji);
	printf("�啶���ɕϊ����ā@%c", moji - 0x20);
}