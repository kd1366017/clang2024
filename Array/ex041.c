#include <stdio.h>
main()
{
	int i;
	float g, box[3];
	g = 0;
	for (i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—Í :");
		scanf("%f", &box[i]);
		g = g + box[i];
	}
	printf("‡Œv‚Í%.2f\n", g);
	printf("•½‹Ï‚Í%.2f\n", g / 3);
}