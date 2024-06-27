/*ex011-1.c*/
#include <stdio.h>

main()
{
	char moji;
	char moji1;
	char moji2;
	char moji3;
	moji = 'A';
	moji1 = 'a';
	moji2 = '0';
	moji3 = ' ';
	printf("A: %d 0x%x  B: %d 0x%x\n", moji, moji, moji + 1, moji + 1);
	printf("C: %d 0x%x  a: %d 0x%x\n", moji + 2, moji + 2, moji1, moji1);
	printf("b: %d 0x%x  c: %d 0x%x\n", moji1 + 1, moji1 + 1, moji1 + 2, moji1 + 2);
	printf("0: %d 0x%x  1: %d 0x%x\n", moji2, moji2, moji2 + 1, moji2 + 1);
	printf("2: %d 0x%x   : %d 0x%x\n", moji2 + 2, moji2 + 2, moji3, moji3);
}