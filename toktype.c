#include<stdio.h>

enum TokType
{
	OpPlus, OpMinus, OpEqual,
	Number,EndOfFile,
};


static enum TokType
gettok(char *buf, int bufsize)
{
	int i = 0;
	char c;
	
	/*
		�X�y�[�X������Ƌ�؂���̂Ƃ���
		�A���ŕ��񂾐��l�͂ЂƂ̐���ł���
		�L���ƃX�y�[�X�͋�ʂ���
	*/
	
	
	while((c = getchar()) != EOF)
	{
		if(isspace(c))
		{
			 continue;
		}
		
		switch(c)
		{
		case '+':
			buf[i] = c;
			i++;
			return OpPlus;
			
		case '-':
			buf[i] = c;
			i++;
			return OpMinus;
			
		case '=':
			buf[i] = c;
			i++;
			return OpEqual;
			
		default:
			if(isdigit(c))
			{
				do{
					buf[i] = c;
					i++;
				}while((c = getchar()) != EOF && isdigit(c) && !isspace(c));
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
