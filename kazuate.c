#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main() {
	int i,s, cnt;
	srand(time(0));
	rand();
	s = rand() % 100 + 1;
	printf("”“–‚ÄƒQ[ƒ€\n");
		cnt= 0;
	while (1) {
		printf("”’l(1`100)‚ğ“ü—Í");
		scanf("%d",&i);
		cnt++;
		if (i < s) {
			printf("%d‚æ‚è‘å‚«‚¢‚Å‚·\n\n",i);
		}
		else if (i > s) {
			printf("%d‚æ‚è¬‚³‚¢‚Å‚·\n\n",i);
		}
		else {
			printf("³‰ğ‚Å‚· %d‰ñ‚Å“–‚Ä‚Ü‚µ‚½\n\n", cnt);
			break;
		}
	}
}