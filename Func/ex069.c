#include <stdio.h>
main()
{
	int  num,sum,cnt;

	sum = cnt = 0;
	printf("®”‚ğ“ü—Í (Ctrl+Z‚ÅI—¹) a : ");
	while (scanf("%d", &num) != EOF)
	{
		sum += num;
		cnt++;
		printf("®”‚ğ“ü—Í (Ctrl+Z‚ÅI—¹) a :");
	}
	printf("‡Œv=%d		•½‹Ï%.2f\n", sum, (float)sum / cnt);
}