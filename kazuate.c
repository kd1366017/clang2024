#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main() {
	int i,s, cnt;
	srand(time(0));
	rand();
	s = rand() % 100 + 1;
	printf("�����ăQ�[��\n");
		cnt= 0;
	while (1) {
		printf("���l(1�`100)�����");
		scanf("%d",&i);
		cnt++;
		if (i < s) {
			printf("%d���傫���ł�\n\n",i);
		}
		else if (i > s) {
			printf("%d��菬�����ł�\n\n",i);
		}
		else {
			printf("�����ł� %d��œ��Ă܂���\n\n", cnt);
			break;
		}
	}
}