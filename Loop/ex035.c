#include <stdio.h>
main()
{
	int n,g;
	g = +0;
	while (1) {
		printf("����?");
		scanf("%d", &n);
		if (n == -999) break;
		g += n;
	}
	printf("���v=%d", g);
}