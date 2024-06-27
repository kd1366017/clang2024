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
	printf("‚È‚É‚ÅŒŸõ‚µ‚Ü‚·‚©H(1:¶‚Ü‚ê”N 2:¶‚Ü‚ê‚Â‚« 3:ŒŒ‰tŒ^ :)");
	scanf("%d", &j);
	for (p = data, i = 0; i < NIN; i++, p++) {
		if (j == 1) {
			printf("¶‚Ü‚ê”N‚ğ“ü—Í>");
			scanf("%d", &k);
			if (p->date.nen == k) {
				printf("%s-- %d ”N %02d Œ %02d “ú¶ ŒŒ‰tŒ^-%sŒ^\n",
					p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
			}
		}
		if (j == 2) {
			printf("¶‚Ü‚êŒ‚ğ“ü—Í>");
			scanf("%d", &k);
			if (p->date.tuki == k) {
				printf("%s-- %d ”N %02d Œ %02d “ú¶ ŒŒ‰tŒ^-%sŒ^\n",
					p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
			}
		}
		if (j == 3) {
			printf("¶‚Ü‚ê“ú‚ğ“ü—Í>");
			scanf("%d", &k);
			if (p->date.tuki == k) {
				printf("%s-- %d ”N %02d Œ %02d “ú¶ ŒŒ‰tŒ^-%sŒ^\n",
					p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
			}
		}
	}
}