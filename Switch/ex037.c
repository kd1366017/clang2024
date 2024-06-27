#include <stdio.h>
main()
{
	char i;
	printf("‰‰Zq‚ğ“ü‚ê‚Ä :");
	scanf("%c", &i);
	switch (i) {
	case 0x2B:printf("‰ÁZ‚Å‚·\n");
		break;
	case 0x2D:printf("Œ¸Z‚Å‚·\n");
		break;
	case 0x2F:printf("œZ‚Å‚·\n");
		break;
	case 0x25:printf("‚ ‚Ü‚è‚Å‚·\n");
		break;
	default:printf("‚»‚Ì‘¼‚Å‚·\n");
		break;
	}
}