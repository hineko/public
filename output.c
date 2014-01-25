#include <stdio.h>
#include <ctype.h>
#include <string.h>

// 吾輩はプログラムである。まだ中身はない
int main(int argc, char* argv[])
{
	char c;

	while((c=getchar()) != EOF)
	{
		if( c != ' ' && c != '\n')
		{
			printf("%c",c);
		}
		else
		{
			printf("\n");
		}
	}
	
	return 0;
}