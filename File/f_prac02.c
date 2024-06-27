#include<stdio.h>
main(){
	int max_socre, score = 0;
	char max_name[20], ch, name[20];
	FILE* fp;
	fp = fopen("socre.txt", "r");
	fscanf(fp, "%s%d", max_name, &max_socre);
	fclose(fp);
	printf("最高得点 名前:%s スコア :%d\n", max_name, max_socre);
	printf("プレイヤー名を入力:");
	scanf("%s", name);
	while (1) {
		printf("現在のスコア:%d('e'で終了)\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	if (score > max_socre) {
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
		printf("ハイスコア更新\n");
	}
}