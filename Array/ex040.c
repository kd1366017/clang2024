#include <stdio.h>
main()
{
	//配列の初期化
	int i, a[5], b[3] = { 30,60,90 };
	//ループ処理で配列aの各要素に数値を代入する
	int i, a[5];
	for (i = 0; i < 4; i++) {
		a[i] = (i + 1) * 10;
	}
	for (i = 0; i <= 4; i++) {
		printf("a[%d]=%d\n", i, a[i]);
	}
	for (i = 0; i <= 3; i++) {
		printf("b[%d]=%d\n", i, b[i]);
	}
}