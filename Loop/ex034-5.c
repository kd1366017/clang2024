#include <stdio.h>
main()
{
	int i,j,n;
	printf("���́H");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
			//i�����͂��ꂽn�ɂȂ�܂�\n���o��
		for (j = 0; j < n-i-1; j++) {
			 //j("�@")�����͂��ꂽn
			printf(" ");
		}
		for (j = 0; j <  i+1; j++) {
			printf("*");
		}
		printf("\n");
	}
}