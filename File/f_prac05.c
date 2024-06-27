#include <stdio.h>
#define MapNum 3
#define w 10
#define h 5
typedef struct {
	int m_map[h][w];
}map;
void setmap(char* filename, map* m);
void drawmap(map m);
main() {
	map mapdata;
	char* mapfilename[MapNum] =
	{ "map0.txt","map1.txt","map2.txt" };
	int selsect;
	printf("ƒ}ƒbƒvNo‚ð“ü—Í(0,1,2)>");
	scanf("%d", &selsect);
	setmap(mapfilename[selsect], &mapdata);
	drawmap(mapdata);
}
void setmap(char* filename, map* m) {
	FILE * fp;
	char ch;
	int i, j;
	if (fp = fopen(filename, "r")) {
		for (i = 0; i < h; i++) {
			for (j = 0; j < w; j++) {
				ch = fgetc(fp);
				m->m_map[i][j] = ch - '0';
			}
			fgetc(fp);
		}
	}
}

void drawmap(map m) {
	int i, j;
	for (i = 0; i < h; +i++) {
		for (j = 0; j < w; j++) {
			if (m.m_map[i][j]==1) {
				printf("¡");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}