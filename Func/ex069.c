#include <stdio.h>
main()
{
	int  num,sum,cnt;

	sum = cnt = 0;
	printf("整数を入力 (Ctrl+Zで終了) a : ");
	while (scanf("%d", &num) != EOF)
	{
		sum += num;
		cnt++;
		printf("整数を入力 (Ctrl+Zで終了) a :");
	}
	printf("合計=%d		平均%.2f\n", sum, (float)sum / cnt);
}