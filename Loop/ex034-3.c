#include <stdio.h>
main()
{
	int i, j,n;
	j = 0;
	printf("����?");
	scanf("%d", &n);
	do {
		i = 0;
		do {
			printf("*");
			i++;
		} while (i < j+1);
		printf("\n");
		j++;
	} while (j < n);
}