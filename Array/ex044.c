#include <stdio.h>
main()
{
	char moji1[80], moji2[80],ir[80];
	int i;

	printf("文字列1を入力 :");
	scanf("%s", &moji1[0]);
	printf("文字列2を入力 :");
	scanf("%s", &moji2[0]);

	printf("moji1 = %s\n", &moji1[0]);
	printf("moji2 = %s\n", &moji2[0]);
	printf("入れ替えると\n");
	for (i = 0; ir[i] = moji1[i]; i++) { //moji1[i]を80回ir[i]に代入する
	}
	for (i = 0; moji1[i] = moji2[i]; i++) {//moji2[i]をmoji1[i]に代入する
	}
	for (i = 0; moji2[i] =ir[i] ; i++) {//ir[i]をmoji2[i]に代入する
	}
	printf("moji1 = %s\n", &moji1[0]);
	printf("moji2 = %s\n", &moji2[0]);
}