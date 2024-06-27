/*ex020.c*/
#include <stdio.h>

main()
{
	char moji;
	printf("¬•¶š‚ğ“ü—ÍF%C");
	scanf("%c", &moji);
	printf("‘å•¶š‚É•ÏŠ·‚µ‚Ä@%c", moji - 0x20);
}