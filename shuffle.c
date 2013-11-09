#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

#define N 5

int main()
{
	srand(time(NULL));
	
	int a[N];
	int i;
	int loop;
	
	loop = rand() % 19 + 1;
	
	for( i=0; i<N; i++)
	{
		a[i] = i+1;
	}
	
	for( i=0; i<loop; i++)
	{
		int from = rand() % N;
		int to = rand() % N;
		
		int temp = a[to];
		a[to] = a[from];
		a[from] = temp;
	}
	
	for(i = 0; i<N; i++)
	{
		printf("[%d]",a[i]);
	}
	
	return 0;
}
