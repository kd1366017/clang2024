#include <stdio.h>
main()
{
	char data[] = {"Apple"};
	int i;
	i = 0;
	printf("一文字ずつ表示\n");
	while (data[i] !='\0') {
		printf("%c", data[i]);
		i++;
	}
	printf("\n文字列で表示\n");
	printf("%s", &data[0]); //data[0]の0はメモリデータ内の配列のデータの終端\0の0までという処理になる
}