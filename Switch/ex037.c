#include <stdio.h>
main()
{
	char i;
	printf("演算子を入れて :");
	scanf("%c", &i);
	switch (i) {
	case 0x2B:printf("加算です\n");
		break;
	case 0x2D:printf("減算です\n");
		break;
	case 0x2F:printf("除算です\n");
		break;
	case 0x25:printf("あまりです\n");
		break;
	default:printf("その他です\n");
		break;
	}
}