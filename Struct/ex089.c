#include <stdio.h>
#include <string.h>
struct profile {//�\���̃^�O��錾 
	char name[20];//char�^�����o�[�Pname[20]��錾
	int birth[3];//int�^�����o�[�Q birth[3]��錾
	char blood[5];//char�^�����o�[�R[5]��錾
};//�\���̍쐬�I��
main()
{
	struct profile pn;//profile�^ �\���̕ϐ�pn��錾
	printf("���O����� :");
	//gets�͋󔒂��܂ޕ����񂪂�����
	gets(pn.name);//pn.name[20]�ɓ����
	printf("���N�������󔒂ŋ�؂��ē��� :");
	scanf("%d%d%d", &pn.birth[0], &pn.birth[1], &pn.birth[2]);
	//3�̐��l��pn.birth[0�`2]�Ɉ�������
	printf("���t�^����� :");
	scanf("%s", &pn.blood);//pn.blood[5]�ɓ����

	printf("%s  %d�N%d��%d�� ���t�^ %s\n",pn.name,pn.birth[0],pn.birth[1],pn.birth[2],pn.blood);
}