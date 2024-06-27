#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	srand(time(0));
	rand();
	rand();
	//printf("“ü‚ê‘Ö‚¦‘O\n");
	int i, target, work,data[20];
	for (i = 0; i < 20; i++) {
		data[i] = i + 1;
		//printf("data[%2d] = %2d\n ", i, data[i]);
	}
	printf("“ü‚ê‘Ö‚¦Œã\n");
	for (i = 0; i < 20; i++) {
		target = rand() % 20;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
		printf("data[%2d]=%2d\n", i, data[i]);
	}
}