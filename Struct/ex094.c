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
		printf("%d�Ԗ�(���O) :",i+1);
		scanf("%s", p->name);
		//gets(p->name);
		printf("%d�Ԗ�(���N����)",i+1);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%d�Ԗ�(���t�^)",i+1);
		scanf("%s", p->blood);
	}
	p = pn;
	for (i = 0; i < 5; i++, p++) {
		if (strcmp(p->blood,"A")==0) {
			printf("%s  %5d�N%5d��%5d�� ���t�^ %s\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}