#include <stdio.h>
main()
{
	char* pgame[3] = { "wii","ds","playstation4" };
	int i;
	char** p;
	for (i = 0; i < 3; i++) {
		p = &pgame[i];
		while (**p) {
			printf("%c", *(*p)++);
		}
		printf("\n");
	}
}