#include <stdio.h>
main()
{
	int  a, b, c, ret;
	printf("３つの整数を空白で区切って入力 :");
	ret = scanf("%d %d %d", &a, &b, &c);
	printf("ret=%d\n a=%d\n b=%d\n c=%d\n",ret,a,b,c);

	printf("整数を入力 (Ctrl+Zで終了) a : ");
	while (scanf("%d", &a) != EOF)
	{
		printf("a=%d\n", a);
		printf("整数を入力 (Ctrl+Zで終了) a :");
	}
}