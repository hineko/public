#include<stdio.h>
#include <ctype.h>

int main()
{
	char s[0];
	if(fgets(s,sizeof(s),stdin) != NULL)
	{
		if(isspace(*s))
		{
			printf("a\n");
		}
		
		if(isprint(*s))
		{
			printf("c\n");
		}
		
		printf("%s",s);
//		fputs(s,stdout);
	} else
	{
		if(isspace(*s))
		{
			printf("b\n");
		}
		printf("%d",*s);
//		fputs(s,stderr);
	}
	
	return 0;
}
