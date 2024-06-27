#include <stdio.h>
main()
{
	char* p = "peach";
	char data1[10] = "banana", * pdata1;
	char data2[10], * pdata2;
	pdata1 = data1;
	pdata2 = data2;

	while (*pdata2++ = *pdata1++);//banana‚ğ“ü‚ê‚Ä‚¢‚­
	pdata1 = data1;

	while (*pdata1++ = *p++);

	printf("data1[] = %s",data1);
	printf("\ndata2[] = %s",data2);

}