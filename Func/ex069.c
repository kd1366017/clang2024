#include <stdio.h>
main()
{
	int  num,sum,cnt;

	sum = cnt = 0;
	printf("��������� (Ctrl+Z�ŏI��) a : ");
	while (scanf("%d", &num) != EOF)
	{
		sum += num;
		cnt++;
		printf("��������� (Ctrl+Z�ŏI��) a :");
	}
	printf("���v=%d		����%.2f\n", sum, (float)sum / cnt);
}