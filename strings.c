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
	
	while((c=getchar()) != '\n')
	{
		// ‹ó”’•¶Žš‚ª‚ ‚é‚©‚Ç‚¤‚©
		if(isspace(c))
		{
			if(i==0)
			{
				// ‚»‚Ì‹ó”’‚ªÅ‰‚Ì•¶Žš‚È‚çŒJ‚è•Ô‚·
				continue;
			}
			else
			{
				// •¶Žš‚ª“ü—Í‚³‚ê‚Ä‚¢‚ê‚ÎI—¹
				return 1;
			}
		}
		
		// •\Ž¦•¶Žš‚Å‚ ‚é‚©‚Ç‚¤‚©
		if(isprint(c))
		{
			buf[i] = c;
			i++;
			
		}else{
			fprintf(stderr,"invalid char '%c'\n",c);
		}
	}
	return 1;
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