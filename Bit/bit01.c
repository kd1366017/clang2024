#include <stdio.h>
enum bitsatate {
	base=0,				//00000000 通常状態
	poison=1<<0,		//00000001 毒状態
	sleep=1<<1,			//00000001 ねむり状態
	paralysis=1<<2,		//00000100 麻痺状態
	burn=1<<3,			//00001000 火傷状態
	atkup=1<<4,			//00010000 攻撃力アップ状態
	atkdown=1<<5		//00100000攻撃力ダウン状態
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
	printf("***現在の状態***\n");
	if (s & poison) {
		printf("毒\n");
	}
	if (s & sleep) {
		printf("眠り\n");
	}
	if (s & paralysis) {
		printf("麻痺\n");
	}
	if (s & burn) {
		printf("火傷\n");
	}
	if (s & atkup) {
		printf("攻撃力アップ\n");
	}
	if (s & atkdown) {
		printf("攻撃力ダウン\n");
	}
	if (s == base) {
		printf("状態異常なし\n");
	}
	printf("**************************");
}

void changeflag(uint* s) {
	int a;
	while (1) {
		displaystatus(*s);
		printf("どの状態に付与しますか？\n");
		printf("1:毒2:睡眠:3麻痺:4火傷:5攻撃up:6攻撃down 0:終了>");
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
		default: //1〜6位階の値の時
			break;
		}
	}
}
void clearflag(uint* s) {
	int a;
	while (1) {
		printf("どの状態を解除しますか？\n");
		printf("1:毒2:睡眠:3麻痺:4火傷:5攻撃up:6攻撃down 7:全解除 0:終了>");
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