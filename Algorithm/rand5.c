#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i,j;
	srand(time(0));
	rand();

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("%3d ", rand() % 300 + 1);
		}
		printf("\n");
	}

	
}