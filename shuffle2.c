#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

#define N 5

int main()
{
	int a[N];
	int b[N];
	int i,j;
	
	srand(time(NULL));
	
	for( i=0; i<N; i++)
	{
		a[i] = i + 1;
		b[i] = 0;
	}
	
	int loop = rand() % 10 + 1;
	
	for( i=0; i<loop; i++)
	{
		int r = rand() % 4 + 1;
		
		for(j=0;j<r;j++)
		{
			b[j] = a[N-r+j];
			a[N-r+j] = a[j];
			a[j] = b[j];
		}
	}
	
	for( i=0; i<N; i++)
	{
		printf("[%d]",a[i]);
	}
	
	
	return 0;
}



