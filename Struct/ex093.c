#include <stdio.h>
struct syohindata {
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohindata syohin[] = { {"�G���s�c",30,5},
									{"�����S��",50,2},
									{"�t�f�o�R",500,3} };
	struct syohindata* p;
	p = syohin;

	int i;
	for (i = 0; i < 3; i++,p++) {
		printf("���i�� :%s\t", p->name);
		printf("�P�� : %4d\t", p->tanka);
		printf("�� : %4d\t", p->kosuu);
		printf("���z : �� %4d\n", p->tanka * p->kosuu);
	}
								
}