#include <stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};
void display3(struct syohin_data* p);
main()
{
	struct syohin_data syohin = { "ƒPƒVƒSƒ€", 50 };
	struct syohin_data* p;
	p = &syohin;
	display3(p);
}
void display3(struct syohin_data* p)
{
	printf("%s\t%d", p->name, p->tanka);
}