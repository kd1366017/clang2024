#include <stdio.h>
main()
{
	char moji1[80], moji2[80],ir[80];
	int i;

	printf("������1����� :");
	scanf("%s", &moji1[0]);
	printf("������2����� :");
	scanf("%s", &moji2[0]);

	printf("moji1 = %s\n", &moji1[0]);
	printf("moji2 = %s\n", &moji2[0]);
	printf("����ւ����\n");
	for (i = 0; ir[i] = moji1[i]; i++) { //moji1[i]��80��ir[i]�ɑ������
	}
	for (i = 0; moji1[i] = moji2[i]; i++) {//moji2[i]��moji1[i]�ɑ������
	}
	for (i = 0; moji2[i] =ir[i] ; i++) {//ir[i]��moji2[i]�ɑ������
	}
	printf("moji1 = %s\n", &moji1[0]);
	printf("moji2 = %s\n", &moji2[0]);
}