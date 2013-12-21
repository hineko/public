#include<stdio.h>
#include <ctype.h>

int main()
{
	char s[0];
	if(fgets(s,sizeof(s),stdin) != NULL)
	{
		if(isspace(*s))
		{
			printf("a");
		}
		
		if(isprint(*s))
		{
			printf("c");
		}
		
		fputs(s,stdout);
	} else
	{
		if(isspace(*s))
		{
			printf("b");
		}		
		fputs(s,stderr);
	}
	
	return 0;
}
