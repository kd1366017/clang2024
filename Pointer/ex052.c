#include <stdio.h>
main()
{
	int a = 100, b = 200,ir;
	int* pa, * pb;
	pa = &a;
	pb = &b;
	printf("é¿çsëO : a = %d		b = %d\n", a, b);
	ir = *pa;
	*pa = *pb;
	*pb = ir;
	printf("é¿çså„ : a = %d		b = %d\n", a, b);
}