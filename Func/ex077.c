#include <stdio.h>
void keisan(int a, int b, int c,int *max,int *min);

main()
{
	int a, b, c, max, min;
	printf("�������R���� :");
	scanf("%d%d%d", &a, &b, &c);
	keisan(a, b, c, &max, &min);
	printf("�ő�l=%d	�ŏ��l=%d", max, min);
}

void keisan(int a, int b, int c, int* max, int* min)
{
	if (a < b && a < c) {
		*min = a;
	}
	if (b < a && b < c) {
		*min = b;
	}
	if (c < a && c < b) {
		*min = c;
	}
	if (a > b && a > c) {
		*max = a;
	}
	if (b > a && b > c) {
		*max = b;
	}
	if (c > a && c > b) {
		*max = c;
	}
	return;
}