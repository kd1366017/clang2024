#include <stdio.h>
main()
{
	char str[256];

	while (gets(str) != NULL)
	{
		puts(str);//()�̒��̕���������̂܂܏o�͂��ĉ��s����(\n)�𖖔��ɒǉ�����
	}
}