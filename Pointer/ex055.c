#include <stdio.h>
main()
{
	int i,ga; //�J�E���^�ϐ���a���v�p
	float gb; //b���v�p
	int a[] = {11,22,33,44,55,66};
	float b[] = { 11.1,22.2,33.3,44.4 };
	int* pa;  //a�p�|�C���^
	float *pb; //b�p�|�C���^
	pa = a;	//a�̃A�h���X���
	pb = b;	//b�̃A�h���X���
	for (ga = 0, i = 0; i < 6; i++) {		//a�̍��v�N���A �J�E���^�N���A 6�ɂȂ�܂Ń��[�v
		ga += *pa;		//���v�̌v�Z
		pa++;  //�|�C���^��i�߂�a[0]++
	}
	printf("�z��a ���v=%d\n", ga);
	printf("����=%.3f\n", ga / 6.0);

	for (gb = 0, i = 0; i < 4; i++) {	//b�̍��v�N���A �S�ɂȂ�܂Ń��[�v
		gb += *pb;  //���v
		pb++; //�|�C���^��i�߂�
	}
	printf("�z��b ���v=%.3f\n", gb);
	printf("����=%.3f", gb / 4.0);
}