#include <stdio.h>
void reverse(char* p_str1, char* p_str2);

main()
{
	char str1[256], str2[256];
	printf("•¶š—ñ :");
	gets(str1);
	reverse(str1, str2);

	printf("str1 :%s\nstr2 :%s\n", str1, str2);
}

void reverse(char* p_str1,char *p_str2)
{
	int i, j;

	for (i = 0; *(p_str1 + i) != '\0'; i++);
	for (i--, j = 0; i >= 0; i--, j++) {
		*(p_str2 + j) = *(p_str1 + i);
	}
	*(p_str2 + j) = '\0';
}