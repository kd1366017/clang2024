#include <stdio.h>
void keisan(int a, int b, int* sum, int* ave);

main()
{
	int a, b,sum,ave;
	printf("整数を2つ入力 :");
	scanf("%d%d", &a,&b);
	keisan(a, b, &sum, &ave);
	printf("合計は%d	平均は%.2f", sum, (float)ave);
}

void keisan(int a, int b, int* sum, int* ave) {
	*sum = a + b;
	*ave = (a + b) / 2.0;
	return;
}