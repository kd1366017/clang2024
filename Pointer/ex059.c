#include <stdio.h>
main()
{
	char data[15] = "C Language";
	char data2[15];
	char* p_data, * p_data2;
	p_data = data;//�擪�A�h���X������
	p_data2 = data2;//�퓬�A�h���X������
	printf("data[]=%s\n", p_data);//%s�̎��̓A�h���X���w�肷��('\0'�܂ł��\��������)
	while (*p_data2++ = *p_data++); /* ������̃R�s�[ */
	p_data2 = data2;
	printf("data2[]=%s\n", p_data2);
	while (*p_data2) {
		putchar(*p_data2++);
	}
	putchar('\n');
}