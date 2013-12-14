#include<stdio.h>
#include<ctype.h>
#include<assert.h>

#define BUFSIZ 1024

enum TokType
{
	OpPlus,OpMinus,OpEqual,
	Number,None,
}

int main(int argc,char *argv[])
{
	TokType toktype;
	int c;
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
			toktype = TokType.OpPlus;
			putchar(c);
			break;
		}
		// �������P�O�i���̐����ł��邩�ǂ��� �P�O�i���Ȃ�^��Ԃ�
		else if(isdigit(c))
		{
			do {
				toktype = TokType.Number;
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
