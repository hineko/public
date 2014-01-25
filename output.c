#include <stdio.h>
#include <ctype.h>

// 吾輩はプログラムである。まだ中身はない
int main(int argc, char* argv[])
{
	char c;
	
	while((c=getchar()) != EOF)
	{
		printf("[");
		
		if( c != ' ')
		{
			printf("%c",c);
		}
		
		printf("]\n");
	}
	
	

	return 0;
}