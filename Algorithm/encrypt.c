#include <stdio.h>
main() {
	int i;
	char s[80];
	printf("���������͂��Ă���������");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0';) {
		s[i]++;
		i++;
	}
	printf("%s",&s[0]);
}