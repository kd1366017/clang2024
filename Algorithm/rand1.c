#include <stdio.h> 
#include <stdlib.h> //�������g���Ƃ��ɕK�v
#include <time.h>	//�������g���Ƃ��ɕK�v

main()
{
	int kazu;

	srand(time(0));	//����������������(�V���b�t��)
	rand(); //rand�̋�ǂ݂Ƃ����ă����_���֐��̕΂���������邽�߂̃e�N�j�b�N
	kazu = rand();	//0�`32767�͈̔͂ŗ��������߂�
	printf("��������������%d�ł�\n", kazu);	
}