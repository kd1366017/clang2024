#include <stdio.h>
main()
{
	int a = 100, b = 200,ir;
	int* pa, * pb;
	pa = &a;
	pb = &b;
	printf("���s�O : a = %d		b = %d\n", a, b);
	ir = *pa;
	*pa = *pb;
	*pb = ir;
	printf("���s�� : a = %d		b = %d\n", a, b);
}