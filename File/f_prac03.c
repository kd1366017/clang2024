#include<stdio.h>
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
void display(soldier s);

main() {
	soldier sol;
	setinfo(&sol, "file03.txt");
	display(sol);
}
void setinfo(soldier* s, char* filename) {
	FILE* fp;

	if (fp = fopen(filename, "r")) {
		fscanf(fp, "%s%d%s%d%f", s->name, &s->hp, s->wpn.wname, &s->wpn.bullet, &s->wpn.atk);
		fclose(fp);
	}
	else {
		printf("�t�@�C�����ǂݍ��߂܂���\n");
	}
}
void display(soldier s) {
	printf("���O:%s �̗�:%d\n", s.name, s.hp);
	printf("����:%s �c�e��:%d �U����:%.2f\n", s.wpn.wname, s.wpn.bullet, s.wpn.atk);
}
	