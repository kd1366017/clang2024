#include <stdio.h>
main()
{
	int  a, b, c, ret;
	printf("‚R‚Â‚Ì®”‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í :");
	ret = scanf("%d %d %d", &a, &b, &c);
	printf("ret=%d\n a=%d\n b=%d\n c=%d\n",ret,a,b,c);

	printf("®”‚ğ“ü—Í (Ctrl+Z‚ÅI—¹) a : ");
	while (scanf("%d", &a) != EOF)
	{
		printf("a=%d\n", a);
		printf("®”‚ğ“ü—Í (Ctrl+Z‚ÅI—¹) a :");
	}
}