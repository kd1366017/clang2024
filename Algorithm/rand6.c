#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i, npc,player;
	printf("�����o���܂���?\n1: �O�[ 2: �`���L 3: �p�[");
	scanf("%d", &player);

	switch (player) {
	case 2: printf("�v���C���[�̓`���L�ł�\n");
		break;
	case 3: printf("�v���C���[�̓p�[�ł�\n");
		break;
	case 1:printf("�v���C���[�̓O�[�ł�\n");
}
	srand(time(0));
	rand();
	npc = rand() % 3 ;
	switch (npc) {
	case 1:printf("�R���s���[�^�[�̓`���L�ł�\n");
		break;
	case 2:printf("�R���s���[�^�[�̓p�[�ł�\n");
		break;
	case 0:printf("�R���s���[�^�[�̓O�[�ł�\n");
	}
	switch (((player - 1) - npc + 3) % 3) {
	case 0:printf("�������ł�\n");
		break;
	case 1:printf("�R���s���[�^�[�̏����ł�\n");
		break;
	case 2:printf("�v���C���[�̏����ł�\n");
		break;
	}

}