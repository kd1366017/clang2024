#include<stdio.h>
main(){
	int max_socre, score = 0;
	char max_name[20], ch, name[20];
	FILE* fp;
	fp = fopen("socre.txt", "r");
	fscanf(fp, "%s%d", max_name, &max_socre);
	fclose(fp);
	printf("�ō����_ ���O:%s �X�R�A :%d\n", max_name, max_socre);
	printf("�v���C���[�������:");
	scanf("%s", name);
	while (1) {
		printf("���݂̃X�R�A:%d('e'�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	if (score > max_socre) {
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
		printf("�n�C�X�R�A�X�V\n");
	}
}