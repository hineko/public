#include<stdio.h>
#include<assert.h>

#define BUFSIZ 1024

int main(int argc,char *argv[])
{
	char str[BUFSIZ];
	
	FILE *fp;
	int i;
	
	fp = fopen(argv[1],"r");
	assert(fp != NULL);
	
	i=0;
	do {
		
		str[i] = getc(fp);
		
	}while(str[i++] != '\n');
	
	printf("str = [ %c ]\n",str[0]);
	
	
	printf("%c");
	
	fclose(fp);
	
	return 0;
}
