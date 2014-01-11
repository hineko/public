#include <stdio.h>
#include <ctype.h>

int strings(char *buf, int bufsize)
{
	int i;
	char c;
	
	for(i=0;i<bufsize;i++)
	{
		buf[i] = '\0';
	}
	
	i=0;
	
	while((c=getchar())!=EOF)
	{
		if(isspace(c))
		{
			continue;
		}
		
		if(isprint(c))
		{
			do {
				buf[i] = c;
				i++;
			}while((c=getchar())!=EOF && isprint(c) && !isspace(c));
			return 1;
		}else{
			fprintf(stderr,"invalid char '%c'\n",c);
		}
	}
	return 0;
}

int main(int argc,char *argv[])
{
	
	char buf[100];
	
	while(strings(buf,sizeof(buf)) != 0)
	{
		printf("[%s]\n",buf);
	}
	
	
	return 0;
}