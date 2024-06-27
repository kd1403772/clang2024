/*ex037.c*/
#include <stdio.h>

main()
{
	char c;

	printf("‰‰Zq‚ğ“ü‚ê‚ÄF");
	scanf("%c", &c);

	switch (c)
	{
	case'+':printf("‰ÁZ‚Å‚·\n");
		break;
	case'-':printf("Œ¸Z‚Å‚·\n");
		break;
	case'*':printf("æZ‚Å‚·\n");
		break;
	case'/':printf("œZ‚Å‚·\n");
		break;
	case'%':printf("—]‚è‚Å‚·\n");
		break;
	default:printf("‚»‚Ì‘¼‚Å‚·\n");
		break;
	}
}