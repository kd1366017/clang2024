#include <stdio.h>
#include <string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile pn[5];
	struct profile *p;
	p = pn;
	int i;
	for (i = 0; i < 5; i++,p++) {
		printf("%d”Ô–Ú(–¼‘O) :",i+1);
		scanf("%s", p->name);
		//gets(p->name);
		printf("%d”Ô–Ú(¶”NŒŽ“ú)",i+1);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%d”Ô–Ú(ŒŒ‰tŒ^)",i+1);
		scanf("%s", p->blood);
	}
	p = pn;
	for (i = 0; i < 5; i++, p++) {
		if (strcmp(p->blood,"A")==0) {
			printf("%s  %5d”N%5dŒŽ%5d“ú ŒŒ‰tŒ^ %s\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}