#include <stdio.h>
main()
{
	int i;
	float g, box[3];
	g = 0;
	for (i = 0; i < 3; i++) {
		printf("��������� :");
		scanf("%f", &box[i]);
		g = g + box[i];
	}
	printf("���v��%.2f\n", g);
	printf("���ς�%.2f\n", g / 3);
}