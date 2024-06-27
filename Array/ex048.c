#include <stdio.h>
main()
{
	int a[2]/*館*/[2]/*階*/[3]/*部屋*/ = {
							{  {3,4,5},
							{4,5,6} },
							{ {2,2,3},
							{2,5,6}  }
							};
	int i, j, l,g;

	for (g = 0, i = 0; i < 2; i++) {
		printf("アパート%d", i + 1);

		for (j = 0; j < 2; j++) {
			printf("(%d階) : ", j + 1);

			for (l = 0; l < 3; l++) {
				printf("%d ",a[i][j][l]);
				g += a[i][j][l];
			}
		}
		printf("\n");
	}
	printf("全体で合計%d人住んでいます\n", g);
}