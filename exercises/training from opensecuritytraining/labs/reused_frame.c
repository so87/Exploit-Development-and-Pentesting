#include <stdio.h>

void f1(int arg)
{
	int x;
	printf("f1: x=%x\n",x);
}

void f2(int arg)
{
	int x;
	x = arg;
	printf("f2: x=%x\n", x);
}

void main()
{
	f1(1);
	f2(2);
	f1(3);
}

