#include <stdio.h>
main()
{
	char data[15] = "Language";
	char* pdata;
	char s;
	int cnt;
	int flg = 0;
	pdata = data;
	printf("data[] = %s\n", pdata);
	printf("検索文字は？ ");
	scanf("%c", &s);
	printf("検索結果は、");
	cnt = 1;
	while (*pdata) {
		if (s == *pdata) {
			printf("%d ", cnt);
			flg = 1;
		}
		*pdata++;
		cnt++;
	}
	if (flg == 1) {
		printf("文字目です\n");
	}
	if (flg == 0) {
		printf("見つからなかった");
	}
}