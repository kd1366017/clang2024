#include <stdio.h>
struct syohindata {
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohindata syohin[] = { {"エンピツ",30,5},
									{"消しゴム",50,2},
									{"フデバコ",500,3} };
	struct syohindata* p;
	p = syohin;

	int i;
	for (i = 0; i < 3; i++,p++) {
		printf("商品名 :%s\t", p->name);
		printf("単価 : %4d\t", p->tanka);
		printf("個数 : %4d\t", p->kosuu);
		printf("金額 : ￥ %4d\n", p->tanka * p->kosuu);
	}
								
}