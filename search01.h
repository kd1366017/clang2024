#include <stdio.h>
main()
{
	int i, s;
	int d[10]={ 10,5,30,77,16,3,47,29,37,33 };
	printf("見つけたい数を入力");
	scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		if (s == d[i]) {
			break;
		}
	}
	if (i == 10) {
		printf("見つからなかった");
	}
	else {
		printf("%d番目で見つかった", i);
	}
}