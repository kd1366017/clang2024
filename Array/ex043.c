#include <stdio.h>
main()
{
	char moji[] = "orange";
	int i;
	i = 0;
	printf("文字列 :%s\n", &moji[0]);
	while (moji[i] != '\0') {
		i++;
	}
	printf("文字数は%d文字", i);
}