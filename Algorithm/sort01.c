#include <stdio.h>
main()
{
	int d[5] = { 30,7,25,16,10 };
	int i, j,w;
	w = 0;
	printf("sort�O�z��\n");
	for (i = 0; i < 5; i++) {
		printf("%d ", d[i]);
	}
	printf("\nsort��z��(�~��)\n");
	for (i = 0; i < 4; i++) {//�z��̃T�C�Y-1�Őݒ�
		for (j = i + 1; j < 5; j++) {//��r�����邽�߂�j��i+1������
			if (d[i] > d[j]) {
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", d[i]);
	}
}