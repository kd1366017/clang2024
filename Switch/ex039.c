#include <stdio.h>
main()
{
	int i1, i2, i3;
	char e;
	printf("処理を入力 :");
	scanf("%c", &e);
	if (e >= 0x41 && e <= 0x5A) {
		e = e + 0x20;
		printf("整数を入力 :");
		scanf("%d%d%d", &i1, &i2, &i3);
	}
	switch (e) {
	case 0x64:
		if (i1 > i2) {
			if (i1 > i3) {
				printf("最大値は%d\n", i1);
				
			}
		}
		else {
			if (i2 > i1) {
				if (i2 > i1) {
					printf("最大値は%d\n", i2);
				}
			}
		}
	else {
		printf("最大値は%d\n", i3);
			 }
		break;
	case 0x73:
		if (i1 < i2) {
			if (i1 < i3) {
				printf("最小値は%d\n", i1);
				break;
			}
	}
			 if (i2 < i1 ) {
				 if (i2 < i3) {
					 printf("最小値は%d\n", i2);
					 break;
				 }
			 }
			 else {
				 printf("最小値は%d\n", i3);
			 }
		break;
	case 0x67:
		printf("合計は%d", i1 + i2 + i3);
		break;
	case 0x68:
		printf("整数を入力 :");
		scanf("%d", &i1, &i2, &i3);
		printf("平均は%.2f", (float)(i1 + i2 + i3) / 3);
		break;
	default:printf("エラーです");
		break;
	}
}