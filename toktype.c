#include<stdio.h>

enum TokType
{
	OpPlus, OpMinus, OpEqual,
	Number,EndOfFile,
};


static enum TokType
gettok(char *buf, int bufsize)
{
	char c;
	
	while((c = getchar()) != EOF)
	{
		if(isspace(c))
		{
			 continue;
		}
		switch(c)
		{
		case '+':
			return OpPlus;
			
		case '-':
			return OpMinus;
			
		case '=':
			return OpEqual;
			
		default:
			if(isdigit(c))
			{
				
				
				return Number;
			}else{
				fprintf(stderr,"invalid char '%c'\n",c);
			}
		}
	}
	
	return EndOfFile;
}


int main()
{
	enum TokType tok;
	char buf[100];

	while((tok = gettok(buf,sizeof(buf))) != EndOfFile)
	{
		printf("tok = %d; buf = {%s}\n", tok, buf);
	}
	
	return 0;
}
