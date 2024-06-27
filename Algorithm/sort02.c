#include <stdio.h>
#define N 5
main()
{
	int d[] = { 30,7,25,16,10 };
	int i, j, w;
	printf("sort‘O\n");
	for (i = 0; i < N; i++) {
		printf("%d ", d[i]);
	}
	for (i = N - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (d[j] > d[j + 1]) {
				w = d[j];
				d[j] = d[j+1];
				d[j+1] = w;
			}
		}
	}
	printf("\nsortŒã\n");
	for (i = 0; i < 5; i++) {
		printf("%d ", d[i]);
	}
}