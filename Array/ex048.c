#include <stdio.h>
main()
{
	int a[2]/*��*/[2]/*�K*/[3]/*����*/ = {
							{  {3,4,5},
							{4,5,6} },
							{ {2,2,3},
							{2,5,6}  }
							};
	int i, j, l,g;

	for (g = 0, i = 0; i < 2; i++) {
		printf("�A�p�[�g%d", i + 1);

		for (j = 0; j < 2; j++) {
			printf("(%d�K) : ", j + 1);

			for (l = 0; l < 3; l++) {
				printf("%d ",a[i][j][l]);
				g += a[i][j][l];
			}
		}
		printf("\n");
	}
	printf("�S�̂ō��v%d�l�Z��ł��܂�\n", g);
}