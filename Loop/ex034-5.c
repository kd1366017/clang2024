#include <stdio.h>
main()
{
	int i,j,n;
	printf("”‚ÍH");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
			//i‚ª“ü—Í‚³‚ê‚½n‚É‚È‚é‚Ü‚Å\n‚ğo—Í
		for (j = 0; j < n-i-1; j++) {
			 //j("@")‚ª“ü—Í‚³‚ê‚½n
			printf(" ");
		}
		for (j = 0; j <  i+1; j++) {
			printf("*");
		}
		printf("\n");
	}
}