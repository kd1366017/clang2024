#include <stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},
	{40,50,60},
	{70,80,90} };
	int* p_tbl, i,j;
	p_tbl = tbl[0];
	printf("2ŽŸŒ³”z—ñtbl‚Ì“à—e\n");
	for (j = 0; j < 3; j++) {
		for (i = 0; i < 3; i++) {
			printf("%d ", *p_tbl++);//*ptbl++‚ð‚±‚±‚É“ü‚ê‚é‚Æ‚Ps‚É’Zk‚Å‚«‚é
			//p_tbl++;
		}
		printf("\n");
	}
}