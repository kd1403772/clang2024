#include <stdio.h>

main()
{
	int ia, ib;
	printf("２つの数値？");
	scanf("%d %d", &ia, &ib);
	printf("*** 25 と 3の四則演算 ***\n%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d あまり%d", ia, ib, ia + ib, ia, ib, ia - ib, ia, ib, ia * ib, ia, ib, ia / ib, ia % ib);
}