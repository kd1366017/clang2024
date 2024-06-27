#include <stdio.h>
enum bitsatate {
	base=0,				//00000000 �ʏ���
	poison=1<<0,		//00000001 �ŏ��
	sleep=1<<1,			//00000001 �˂ނ���
	paralysis=1<<2,		//00000100 ��჏��
	burn=1<<3,			//00001000 �Ώ����
	atkup=1<<4,			//00010000 �U���̓A�b�v���
	atkdown=1<<5		//00100000�U���̓_�E�����
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
	printf("***���݂̏��***\n");
	if (s & poison) {
		printf("��\n");
	}
	if (s & sleep) {
		printf("����\n");
	}
	if (s & paralysis) {
		printf("���\n");
	}
	if (s & burn) {
		printf("�Ώ�\n");
	}
	if (s & atkup) {
		printf("�U���̓A�b�v\n");
	}
	if (s & atkdown) {
		printf("�U���̓_�E��\n");
	}
	if (s == base) {
		printf("��Ԉُ�Ȃ�\n");
	}
	printf("**************************");
}

void changeflag(uint* s) {
	int a;
	while (1) {
		displaystatus(*s);
		printf("�ǂ̏�Ԃɕt�^���܂����H\n");
		printf("1:��2:����:3���:4�Ώ�:5�U��up:6�U��down 0:�I��>");
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
		default: //1�`6�ʊK�̒l�̎�
			break;
		}
	}
}
void clearflag(uint* s) {
	int a;
	while (1) {
		printf("�ǂ̏�Ԃ��������܂����H\n");
		printf("1:��2:����:3���:4�Ώ�:5�U��up:6�U��down 7:�S���� 0:�I��>");
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