#include <stdio.h>
main() {
	int a = 50, b = 10, c;
	int* pa, *pb;
	pa = &a;
	pb = &b;
	printf("%d + %d = %d", *pa, *pb, *pa + *pb);
}