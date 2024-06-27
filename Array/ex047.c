#include <stdio.h>
main()
{
	float g,x[3][2];
	int i, j;
	for (i = 0;i < 3; i++){
		for (g= 0, j = 0; j < 2; j++) {
			printf("x[0][0]=");
			scanf("%f", &x[i][j]);
			g += x[i][j];
		}
		printf("%ds–Ú‚Ì•½‹Ï = %.2f\n\n", i, g / 2);
	}
}