#include <stdio.h>
main() {
	int i;
	char s[80];
	printf("複合化文字列を入力してください＞");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0';) {
		s[i]--;
		i++;
	}
	printf("複合済み文字列は、%s", &s[0]);
}