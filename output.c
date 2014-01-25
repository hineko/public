#include <stdio.h>
#include <ctype.h>
#include <string.h>

// 吾輩はプログラムである。まだ中身はない
int main(int argc, char* argv[])
{
	char c;

	while((c=getchar()) != EOF)
	{
		if( c != ' ' )
		{
			printf("%c",c);
		}else if ( c != '\n' )
		{
			printf("]\n[");
		}
		else
		{
			printf("]\n");
		}
	}
	
	return 0;
}