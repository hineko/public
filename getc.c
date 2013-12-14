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
		// 標準空白類文字があれば真を返す ' ' '\t' '\n'など
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
		// 文字が１０進数の数字であるかどうか １０進数なら真を返す
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
			// 上記以外の文字はエラーを吐く
			fprintf(stderr,"invalid char '%c'\n",c);
		}
	}	
	return 0;
}
