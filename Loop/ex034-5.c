#include <stdio.h>
main()
{
	int i,j,n;
	printf("数は？");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
			//iが入力されたnになるまで\nを出力
		for (j = 0; j < n-i-1; j++) {
			 //j("　")が入力されたn
			printf(" ");
		}
		for (j = 0; j <  i+1; j++) {
			printf("*");
		}
		printf("\n");
	}
}