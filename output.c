#include <stdio.h>
#include <ctype.h>
#include <string.h>

// 吾輩はプログラムである。まだ中身はない
int main(int argc, char* argv[])
{
	char c[100];
	int i=0;
	
	while(fgets(c,sizeof(c),stdin) != NULL)
	{
loop:
		printf("[");

		while( c[i] != ' ')
		{
			printf("%c",c[i]);
			i++;
		}
		i++;
		printf("]\n");
		if( c[i] != '\n')
		{
			goto loop;
		}
		
		i=0;
	}
	return 0;
}