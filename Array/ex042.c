#include <stdio.h>
main()
{
	char data[] = {"Apple"};
	int i;
	i = 0;
	printf("�ꕶ�����\��\n");
	while (data[i] !='\0') {
		printf("%c", data[i]);
		i++;
	}
	printf("\n������ŕ\��\n");
	printf("%s", &data[0]); //data[0]��0�̓������f�[�^���̔z��̃f�[�^�̏I�[\0��0�܂łƂ��������ɂȂ�
}