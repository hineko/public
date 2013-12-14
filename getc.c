#include<stdio.h>
#include<assert.h>

#define BUFSIZ 1024

int main(int argc,char *argv[])
{
	char str[BUFSIZ];
	
	printf("Message = ");
	scanf("%s",str);
	
	printf("%c",str[0]);
	
	
	return 0;
}
