#include <stdio.h>
main()
{
	int s;
	int low, mid, high;
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	printf("探したい数を入力してください :");
	scanf("%d",&s);
	for (low = 0, high = 10; low <= high;) {
		mid = (low + high) / 2;
		if (s == d[mid]) {
			break;
		}
		else if (s > d[mid]) {
			low = mid + 1;
		}
		else if (s < d[mid]) {
			high = mid - 1;
		}
	}
	if (low > high) {
		printf("みつからなかった");
	}
	else {
		printf("%d番目で見つかりました", mid);
	}
}