#include <stdio.h>
main()
{
	int d[5] = { 30,7,25,16,10 };
	int i, j,w;
	w = 0;
	printf("sort前配列\n");
	for (i = 0; i < 5; i++) {
		printf("%d ", d[i]);
	}
	printf("\nsort後配列(降順)\n");
	for (i = 0; i < 4; i++) {//配列のサイズ-1で設定
		for (j = i + 1; j < 5; j++) {//比較をするためにjにi+1をする
			if (d[i] > d[j]) {
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", d[i]);
	}
}