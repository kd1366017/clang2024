#include <stdio.h>
main()
{
	int a = 100, b = 200;
	int *pa, *pb,*ir;
	pa = &a;
	pb = &b;
	printf("���s�O : a = %d		b = %d\n", *pa,*pb);
	ir = pa;
	pa = pb;
	pb = ir;
		printf("���s�� : a = %d		b = %d\n", *pa, *pb);
}