#include <stdio.h>

int f()
{
	printf("f\n");
	return 1;
}

int g()
{
	printf("g\n");
	return 0;
}


int main()
{
	int a = 1;
	int b = 2;
	int c = (f() & g());
	int d = (f() && g());
	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("d = %d\n", d);
	
	return 0;
}