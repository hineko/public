#include <stdio.h>
#include <ctype.h>

// 吾輩はプログラムである。まだ中身はない
int main(int argc, char* argv[])
{
	
	char tmp;
	char c[100];
	int i,prev;
	i = prev = 0;
	
	do
	{
		tmp = getchar();
		
		if(tmp != ' ' && tmp != '\n')
		{
			c[i] = tmp;
			i++;
		}
		else
		{
			if(i>0)
			{
				printf("[%s]\n",c);
				prev = i;
				for(i=0;i<=prev;i++)
				{
					c[i] = '\0';
				}
				i=0;
			}
		}
	}while( tmp != EOF );

	return 0;
}