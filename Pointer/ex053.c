#include <stdio.h>
main()
{
	int a = 100, b = 200;
	int *pa, *pb,*ir;
	pa = &a;
	pb = &b;
	printf("実行前 : a = %d		b = %d\n", *pa,*pb);
	ir = pa;
	pa = pb;
	pb = ir;
		printf("実行後 : a = %d		b = %d\n", *pa, *pb);
}