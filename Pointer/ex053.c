#include <stdio.h>
main()
{
	int a = 100, b = 200;
	int *pa, *pb,*ir;
	pa = &a;
	pb = &b;
	printf("é¿çsëO : a = %d		b = %d\n", *pa,*pb);
	ir = pa;
	pa = pb;
	pb = ir;
		printf("é¿çså„ : a = %d		b = %d\n", *pa, *pb);
}