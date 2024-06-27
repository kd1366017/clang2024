#include <stdio.h>
#include <string.h>
struct profile {//構造体タグを宣言 
	char name[20];//char型メンバー１name[20]を宣言
	int birth[3];//int型メンバー２ birth[3]を宣言
	char blood[5];//char型メンバー３[5]を宣言
};//構造体作成終了
main()
{
	struct profile pn;//profile型 構造体変数pnを宣言
	printf("名前を入力 :");
	//getsは空白を含む文字列がいける
	gets(pn.name);//pn.name[20]に入れる
	printf("生年月日を空白で区切って入力 :");
	scanf("%d%d%d", &pn.birth[0], &pn.birth[1], &pn.birth[2]);
	//3つの数値をpn.birth[0～2]に一つずつ入れる
	printf("血液型を入力 :");
	scanf("%s", &pn.blood);//pn.blood[5]に入れる

	printf("%s  %d年%d月%d日 血液型 %s\n",pn.name,pn.birth[0],pn.birth[1],pn.birth[2],pn.blood);
}