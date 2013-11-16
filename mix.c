#include <stdio.h>
#include <assert.h>

#define BUFSIZ 1024

int main(void)
{
	char str1[BUFSIZ];
	char str2[BUFSIZ];

	FILE *fpA, *fpB;

	fpA = fopen("a.txt","r");
	fpB = fopen("b.txt","r");
	
	assert(fpA);
	assert(fpB);
	
	while(fgets(str1,BUFSIZ,fpA) && fgets(str2,BUFSIZ,fpB))
	{
		printf("%s",str1);
		printf("%s",str2);
	}
	
	fclose(fpA);
	fclose(fpB);
	
	return 0;
}
