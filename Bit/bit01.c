#include <stdio.h>
enum bitsatate {
	base=0,				//00000000 ’Êíó‘Ô
	poison=1<<0,		//00000001 “Åó‘Ô
	sleep=1<<1,			//00000001 ‚Ë‚Ş‚èó‘Ô
	paralysis=1<<2,		//00000100 –ƒáƒó‘Ô
	burn=1<<3,			//00001000 ‰Îó‘Ô
	atkup=1<<4,			//00010000 UŒ‚—ÍƒAƒbƒvó‘Ô
	atkdown=1<<5		//00100000UŒ‚—Íƒ_ƒEƒ“ó‘Ô
};
typedef unsigned int uint;
void displaystatus(uint s);
void changeflag(uint* s);
void clearflag(uint* s);

main()
{
	uint mystate = base;
	changeflag(&mystate);
	//displaystatus(mystate);
	clearflag(&mystate);
	//displaystatus(mystate);
}

void displaystatus(uint s) {
	printf("***Œ»İ‚Ìó‘Ô***\n");
	if (s & poison) {
		printf("“Å\n");
	}
	if (s & sleep) {
		printf("–°‚è\n");
	}
	if (s & paralysis) {
		printf("–ƒáƒ\n");
	}
	if (s & burn) {
		printf("‰Î\n");
	}
	if (s & atkup) {
		printf("UŒ‚—ÍƒAƒbƒv\n");
	}
	if (s & atkdown) {
		printf("UŒ‚—Íƒ_ƒEƒ“\n");
	}
	if (s == base) {
		printf("ó‘ÔˆÙí‚È‚µ\n");
	}
	printf("**************************");
}

void changeflag(uint* s) {
	int a;
	while (1) {
		displaystatus(*s);
		printf("‚Ç‚Ìó‘Ô‚É•t—^‚µ‚Ü‚·‚©H\n");
		printf("1:“Å2:‡–°:3–ƒáƒ:4‰Î:5UŒ‚up:6UŒ‚down 0:I—¹>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:	*s |= poison;
			break;
		case 2: *s|= sleep;
			break;
		case 3:paralysis;
			break;
		case 4:*s |= burn;
			break;
		case 5:*s |= atkup;
			break;
		case 6:*s |= atkdown;
			break;
		default: //1`6ˆÊŠK‚Ì’l‚Ì
			break;
		}
	}
}
void clearflag(uint* s) {
	int a;
	while (1) {
		printf("‚Ç‚Ìó‘Ô‚ğ‰ğœ‚µ‚Ü‚·‚©H\n");
		printf("1:“Å2:‡–°:3–ƒáƒ:4‰Î:5UŒ‚up:6UŒ‚down 7:‘S‰ğœ 0:I—¹>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~poison;
			break;
		case 2:
			*s &= ~sleep;
			break;
		case 3:
			*s &= ~paralysis;
			break;
		case 4:
			*s &= ~burn;
			break;
		case 5:
			*s &= ~atkup;
			break;
		case 6:
			* s &= ~atkdown;
				break;
		case 7:
			*s = base;
		default:
			break;
		}
	}
}