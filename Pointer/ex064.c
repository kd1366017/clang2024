#include <stdio.h>
main() {
	char* p_ride[3] = { "car","bas","shinkansen" };
	char* p;
	int i;
	for (i = 0; i < 3; i++) {
		p = p_ride[i];
			while (*p) {
				putchar(*p++);
			}
			printf("\n");
	}
}