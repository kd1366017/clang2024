#include <stdio.h>
main() {
	int i;
	char s[80];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0';) {
		s[i]++;
		i++;
	}
	printf("%s",&s[0]);
}