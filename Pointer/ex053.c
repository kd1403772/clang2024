#include <stdio.h>

main()
{
	int a = 100, b = 200;
	int* p_a;
	int* p_b;
	int* w;

	p_a = &a;
	p_b = &b;

	printf("���s�O�F*p_a = %d    *p_b = %d\n", *p_a, *p_b);
	w = p_a;
	p_a = p_b;
	p_b = w;
	printf("���s��F*p_a = %d    *p_b = %d\n", *p_a, *p_b);
}