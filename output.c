#include <stdio.h>
#include <ctype.h>
#include <string.h>

// 吾輩はプログラムである。まだ中身はない
int main(int argc, char* argv[])
{
	char tmp;
	char c[100];
	int i = 0;
	
	while( (tmp=getchar()) != EOF)
	{
		if(isspace(tmp))
		{
			// スペースは単語の区切り
			if(i<=0)
			{
				continue;
			}
			else
			{
				printf("[%s]\n",c);
				memset(c,'\0',100);
				i=0;
				continue;
			}
		}
		else
		{
			c[i] = tmp;
			i++;
		}
	
	}
	
	return 0;
}