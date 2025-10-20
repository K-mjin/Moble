#include "GuGuDan.h"
#include "GuGuDanEx.h"
#include <stdio.h>

int main() 
{
	GuGuDan guDan;

	guDan.printAll();

	printf("\n");

	GuGuDanEx guDanEx;

	guDanEx.printAll();

	printf("\n");
	printf("\n");
	printf("\n");

	GuGuDan* guDanAll[2] = { &guDan, &guDanEx };

	for (int i = 0; i < 2; ++i)
	{
		guDanAll[i]->printAll();
	}

	return 0;
}