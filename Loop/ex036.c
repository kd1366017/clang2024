#include <stdio.h>
main()
{
	int i;
	printf("break test profram\n");
	for (i = 1; i <= 10; i++) {
		if (i == 7) {
			break;
		}
		printf("%3d", i);//%3d‚Æ‚·‚é‚Æ001(( , ,1)‚Ì‚æ‚¤‚É‚È‚Á‚Äo—Í‚³‚ê‚é
	}

	printf("\n\ncountinue test program\n");
	for (i = 1; i <= 10; i++) {
		if (i%2 == 1) {
			continue;
		}
		printf("%3d", i);
	}
}