#include <stdio.h>
main()
{
	int i1, i2, i3;
	char e;
	printf("��������� :");
	scanf("%c", &e);
	if (e >= 0x41 && e <= 0x5A) {
		e = e + 0x20;
		printf("��������� :");
		scanf("%d%d%d", &i1, &i2, &i3);
	}
	switch (e) {
	case 0x64:
		if (i1 > i2) {
			if (i1 > i3) {
				printf("�ő�l��%d\n", i1);
				
			}
		}
		else {
			if (i2 > i1) {
				if (i2 > i1) {
					printf("�ő�l��%d\n", i2);
				}
			}
		}
	else {
		printf("�ő�l��%d\n", i3);
			 }
		break;
	case 0x73:
		if (i1 < i2) {
			if (i1 < i3) {
				printf("�ŏ��l��%d\n", i1);
				break;
			}
	}
			 if (i2 < i1 ) {
				 if (i2 < i3) {
					 printf("�ŏ��l��%d\n", i2);
					 break;
				 }
			 }
			 else {
				 printf("�ŏ��l��%d\n", i3);
			 }
		break;
	case 0x67:
		printf("���v��%d", i1 + i2 + i3);
		break;
	case 0x68:
		printf("��������� :");
		scanf("%d", &i1, &i2, &i3);
		printf("���ς�%.2f", (float)(i1 + i2 + i3) / 3);
		break;
	default:printf("�G���[�ł�");
		break;
	}
}