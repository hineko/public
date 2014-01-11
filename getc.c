#include<stdio.h>
#include<ctype.h>
#include<assert.h>

#define BUFSIZ 1024

enum TokType
{
	OpPlus,OpMinus,OpEqual,
	Number,EndOfFile,
};

static enum TokType gettok(char *buf, int bufsiz)
{
	do{
	if(isspace(buf));
	
	}while(getchar(c));
}

int main(int argc,char *argv[])
{
	enum TokType tok;
	char buf[100];
	int c;
	
	while((tok = gettok(buf,sizeof(buf))) != EndOfFile)
	{
		printf("tok = %d; buf = {%s}\n",tok,buf);
	}
	
	while((c=getchar()) != EOF)
	{
		// �W���󔒗ޕ���������ΐ^��Ԃ� ' ' '\t' '\n'�Ȃ�
		if(isspace(c))
		{
			continue;
		}
		
		if(c == '+' || c == '-' || c == '=')
//		 if(c == OpPlus || c == OpMinus || c == OpEqual)
		{
			putchar(c);
			break;
		}
		// �������P�O�i���̐����ł��邩�ǂ��� �P�O�i���Ȃ�^��Ԃ�
		else if(isdigit(c))
		{
			do {
				putchar(c);
			}while((c = getchar()) != EOF && isdigit(c));
			break;
		}
		else
		{
			// ��L�ȊO�̕����̓G���[��f��
			fprintf(stderr,"invalid char '%c'\n",c);
		}
	}	
	return 0;
}
