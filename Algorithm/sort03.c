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
	for (i = 1; i < N; i++) {
		for (j = i - 1; j >= 0; j--) {
			if (d[j + 1] >= d[j]) {
				break;
			}
			else {
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
			}
		}
	}
	printf("\nsortŒã\n");
	for (i = 0; i < N; i++) {
		printf("%d ", d[i]);
	}
}