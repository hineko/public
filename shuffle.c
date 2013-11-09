#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

#define N 5

void change(int a[],int from, int to)
{
	int temp = a[to];
	a[to] = a[from];
	a[from] = temp;
}

int main()
{
	srand((unsigned int)time(NULL));
	
	int a[N];
	int i;
	int roop;
	
	while((roop = rand() % 20) == 0);
	
	for( i=0; i<N; i++)
	{
		a[i] = i+1;
	}
	
	for( i=0; i<roop; i++)
	{
		change(a,rand() % N,rand() % N);
	}
	
	printf("roop = %d\n",roop);
	for(i = 0; i<N; i++)
	{
		printf("[%d]",a[i]);
	}
	
	return 0;
}
