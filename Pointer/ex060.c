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
	printf("���������́H ");
	scanf("%c", &s);
	printf("�������ʂ́A");
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
		printf("�����ڂł�\n");
	}
	if (flg == 0) {
		printf("������Ȃ�����");
	}
}