#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main() {
	int i,s, cnt;
	srand(time(0));
	rand();
	s = rand() % 100 + 1;
	printf("数当てゲーム\n");
		cnt= 0;
	while (1) {
		printf("数値(1〜100)を入力");
		scanf("%d",&i);
		cnt++;
		if (i < s) {
			printf("%dより大きいです\n\n",i);
		}
		else if (i > s) {
			printf("%dより小さいです\n\n",i);
		}
		else {
			printf("正解です %d回で当てました\n\n", cnt);
			break;
		}
	}
}