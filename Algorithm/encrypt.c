#include <stdio.h>
main() {
	int i;
	char s[80];
	printf("文字列を入力してください＞");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0';) {
		s[i]++;
		i++;
	}
	printf("%s",&s[0]);
}