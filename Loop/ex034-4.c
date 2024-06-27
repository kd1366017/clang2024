#include <stdio.h>
main()
{
	int i, j, n, sp;
	j = 0;
	printf("”‚Í?");
	scanf("%d", &n);
	do {
		i= 0;
		do {
			printf(" ");
			i++;
		} while (i < n - j);
		i = 0;
		do {
			printf("*");
			i++;
		} while (i < j + 1);
		printf("\n");
		j++;
	} while (j < n);
}