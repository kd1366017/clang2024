#include <stdio.h>
#define NIN 5
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day date;
	char blood[5];
};
main()
{
	struct profile data[NIN] = { { "AAAAA", 2000, 1, 1, "A" },
	{ "BBBBB", 1999, 2, 28, "B" },
	{ "CCCCC", 1998, 5, 1, "O" },
	{ "DDDDD", 1997, 12, 31, "AB"},
	{ "EEEEE", 1996, 2, 1, "A" } };
	struct profile* p;
	int i,j,k;		
	printf("なにで検索しますか？(1:生まれ年 2:生まれつき 3:血液型 :)");
	scanf("%d", &j);
	for (p = data, i = 0; i < NIN; i++, p++) {
		if (j == 1) {
			printf("生まれ年を入力>");
			scanf("%d", &k);
			if (p->date.nen == k) {
				printf("%s-- %d 年 %02d 月 %02d 日生 血液型-%s型\n",
					p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
			}
		}
		if (j == 2) {
			printf("生まれ月を入力>");
			scanf("%d", &k);
			if (p->date.tuki == k) {
				printf("%s-- %d 年 %02d 月 %02d 日生 血液型-%s型\n",
					p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
			}
		}
		if (j == 3) {
			printf("生まれ日を入力>");
			scanf("%d", &k);
			if (p->date.tuki == k) {
				printf("%s-- %d 年 %02d 月 %02d 日生 血液型-%s型\n",
					p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
			}
		}
	}
}