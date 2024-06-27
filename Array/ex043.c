#include <stdio.h>
main()
{
	char moji[] = "orange";
	int i;
	i = 0;
	printf("•¶š—ñ :%s\n", &moji[0]);
	while (moji[i] != '\0') {
		i++;
	}
	printf("•¶š”‚Í%d•¶š", i);
}