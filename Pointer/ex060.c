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
	printf("ŒŸõ•¶š‚ÍH ");
	scanf("%c", &s);
	printf("ŒŸõŒ‹‰Ê‚ÍA");
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
		printf("•¶š–Ú‚Å‚·\n");
	}
	if (flg == 0) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
}