#include<stdio.h>

int main()
{
	char s[0];
	if(fgets(s,sizeof(s),stdin) != NULL)
	{
		fputs(s,stdout);
	} else 
	{
		fputs(s,stderr);
	}
	
	return 0;
}
