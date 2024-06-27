#include <stdio.h>
main()
{
	int a, b, c;
	a = 5;
	b = 3;
	printf("入れ替え前の値\n %d %d \n", a, b);
	c = a;
	a = b;
	b = c;
	printf("入れ替え後の値\n %d %d \n", a, b);
	printf("別解のやり方\n");
	a = 5;
	b = 3;
	printf("入れ替え前の値\n %d %d \n", a, b);
	a = a + b;
	b = b - a;
	b = 0 - b;
	a = a - b;
	printf("入れ替え後の値\n %d %d\n", a, b);
}