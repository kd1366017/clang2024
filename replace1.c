#include <stdio.h>
main()
{
	int a, b, c;
	a = 5;
	b = 3;
	printf("����ւ��O�̒l\n %d %d \n", a, b);
	c = a;
	a = b;
	b = c;
	printf("����ւ���̒l\n %d %d \n", a, b);
	printf("�ʉ��̂���\n");
	a = 5;
	b = 3;
	printf("����ւ��O�̒l\n %d %d \n", a, b);
	a = a + b;
	b = b - a;
	b = 0 - b;
	a = a - b;
	printf("����ւ���̒l\n %d %d\n", a, b);
}