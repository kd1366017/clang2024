#include<stdio.h>
#define sol_Num 3
typedef struct{
	char wname[20];
int bullet;
float atk;
}weapon;

typedef struct {
	char name[20];
	int hp;
	weapon wpn;
}soldier;
void setinfo(soldier* s, char* filename);
void display(soldier* s);

main() {
	soldier sols[sol_Num];
	setinfo(sols, "file04.txt");
	display(sols);
}
void setinfo(soldier* s, char* filename) {
	FILE* fp;
	int i;

	if (fp = fopen(filename, "r")) {
		for (i = 0; i < sol_Num; i++) {
			fscanf(fp, "%s%d%s%d%f", (s+i)->name, &(s+i)->hp, (s+i)->wpn.wname, &(s+i)->wpn.bullet, &(s+i)->wpn.atk);
		}
		fclose(fp);
	}
	else {
		printf("ファイルが読み込めません\n");
	}
}
void display(soldier* s) {
	int i;
	for (i = 0; i < sol_Num; i++) {
		printf("名前:%s 体力:%d\n", (s+i)->name, (s+i)->hp);
		printf("武器:%s 残弾数:%d 攻撃力:%.2f\n\n", (s+i)->wpn.wname, (s+i)->wpn.bullet, (s+i)->wpn.atk);
	}
}
	