#include <stdio.h>
main()
{
	int i;
	float g, box[3];
	g = 0;
	for (i = 0; i < 3; i++) {
		printf("実数を入力 :");
		scanf("%f", &box[i]);
		g = g + box[i];
	}
	printf("合計は%.2f\n", g);
	printf("平均は%.2f\n", g / 3);
}