#include <stdio.h>
main()
{
	char i;
	printf("���Z�q������ :");
	scanf("%c", &i);
	switch (i) {
	case 0x2B:printf("���Z�ł�\n");
		break;
	case 0x2D:printf("���Z�ł�\n");
		break;
	case 0x2F:printf("���Z�ł�\n");
		break;
	case 0x25:printf("���܂�ł�\n");
		break;
	default:printf("���̑��ł�\n");
		break;
	}
}