#include "GuGuDan.h"
#include <stdio.h>

GuGuDan::GuGuDan() 
{

}

GuGuDan::~GuGuDan() 
{

}

void GuGuDan::printHead()
{
	printf("===============������===============\n");
}


void GuGuDan::printFoot()
{
	printf("=================��=================\n");
}

void GuGuDan::printBody()
{
	for (int i = 1; i <= 9; i++)
	{
		printf("2 * [%d] = [%d]\n", i, 2 * i);
	}
}

void GuGuDan::printAll()
{
	printHead();
	printBody();
	printFoot();
}