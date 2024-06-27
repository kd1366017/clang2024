#include <stdio.h>
void keisan(int a, int b, int* sum, int* ave);

main()
{
	int a, b,sum,ave;
	printf("®”‚ğ2‚Â“ü—Í :");
	scanf("%d%d", &a,&b);
	keisan(a, b, &sum, &ave);
	printf("‡Œv‚Í%d	•½‹Ï‚Í%.2f", sum, (float)ave);
}

void keisan(int a, int b, int* sum, int* ave) {
	*sum = a + b;
	*ave = (a + b) / 2.0;
	return;
}