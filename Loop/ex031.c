/*ex031.c*/
#include <stdio.h>

main() {
	int i,gokei;

	gokei = 0;
	i = 1;
	for (i = 1; i <= 10; i++) {
		gokei += i;
		printf("1‚©‚ç%d‚Ü‚Å‚Ì˜a=%d\n", i, gokei);
	}
}