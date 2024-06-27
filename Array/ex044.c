#include <stdio.h>
main()
{
	char moji1[80], moji2[80],ir[80];
	int i;

	printf("•¶Žš—ñ1‚ð“ü—Í :");
	scanf("%s", &moji1[0]);
	printf("•¶Žš—ñ2‚ð“ü—Í :");
	scanf("%s", &moji2[0]);

	printf("moji1 = %s\n", &moji1[0]);
	printf("moji2 = %s\n", &moji2[0]);
	printf("“ü‚ê‘Ö‚¦‚é‚Æ\n");
	for (i = 0; ir[i] = moji1[i]; i++) { //moji1[i]‚ð80‰ñir[i]‚É‘ã“ü‚·‚é
	}
	for (i = 0; moji1[i] = moji2[i]; i++) {//moji2[i]‚ðmoji1[i]‚É‘ã“ü‚·‚é
	}
	for (i = 0; moji2[i] =ir[i] ; i++) {//ir[i]‚ðmoji2[i]‚É‘ã“ü‚·‚é
	}
	printf("moji1 = %s\n", &moji1[0]);
	printf("moji2 = %s\n", &moji2[0]);
}