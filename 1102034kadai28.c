#include <stdio.h>

main()
{
	long ia;
	printf("整数？");
	scanf("%ld", &ia);
	printf("2倍すると %ld\n3倍すると %ld\n4倍すると %ld", ia * 2, ia * 3, ia * 4);
}