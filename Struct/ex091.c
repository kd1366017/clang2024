#include <stdio.h>
#include <string.h>
struct profile {//\‘¢‘Ìƒ^ƒO‚ðéŒ¾ 
	char name[20];//charŒ^ƒƒ“ƒo[‚Pname[20]‚ðéŒ¾
	int birth[3];//intŒ^ƒƒ“ƒo[‚Q birth[3]‚ðéŒ¾
	char blood[5];//charŒ^ƒƒ“ƒo[‚R[5]‚ðéŒ¾
};//\‘¢‘Ìì¬I—¹
main()
{
	struct profile pn;//profileŒ^ \‘¢‘Ì•Ï”pn‚ðéŒ¾
	struct profile* p;
	p = &pn;
	printf("–¼‘O‚ð“ü—Í :");
	//gets‚Í‹ó”’‚ðŠÜ‚Þ•¶Žš—ñ‚ª‚¢‚¯‚é
	gets(p->name);
	printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í :");
	scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
	//3‚Â‚Ì”’l‚ðpn.birth[0`2]‚Éˆê‚Â‚¸‚Â“ü‚ê‚é
	printf("ŒŒ‰tŒ^‚ð“ü—Í :");
	scanf("%s", p->blood);//pn.blood[5]‚É“ü‚ê‚é

	printf("%s  %d”N%dŒŽ%d“ú ŒŒ‰tŒ^ %s\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
}