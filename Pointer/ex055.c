#include <stdio.h>
main()
{
	int i,ga; //カウンタ変数とa合計用
	float gb; //b合計用
	int a[] = {11,22,33,44,55,66};
	float b[] = { 11.1,22.2,33.3,44.4 };
	int* pa;  //a用ポインタ
	float *pb; //b用ポインタ
	pa = a;	//aのアドレス代入
	pb = b;	//bのアドレス代入
	for (ga = 0, i = 0; i < 6; i++) {		//aの合計クリア カウンタクリア 6になるまでループ
		ga += *pa;		//合計の計算
		pa++;  //ポインタを進めるa[0]++
	}
	printf("配列a 合計=%d\n", ga);
	printf("平均=%.3f\n", ga / 6.0);

	for (gb = 0, i = 0; i < 4; i++) {	//bの合計クリア ４になるまでループ
		gb += *pb;  //合計
		pb++; //ポインタを進める
	}
	printf("配列b 合計=%.3f\n", gb);
	printf("平均=%.3f", gb / 4.0);
}