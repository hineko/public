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
		do{
			printf("[");
			while( c[i] != ' ')
			{
				printf("%c",c[i]);
				i++;
			}
			printf("]\n");
		}while(c[i] != '\n');
		i=0;
	}
	return 0;
}