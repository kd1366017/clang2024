#include <stdio.h>
main()
{
	int i1, i2, i3;
	char e;
	printf("��������� :");
	scanf("%c", &e);
	if (e >= 0x41 && e <= 0x5A) {
		e = e + 0x20;
		printf("%c", e);
	}
	}