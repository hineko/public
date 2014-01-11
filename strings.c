#include <stdio.h>
#include <ctype.h>

int strings(char *buf, int bufsize)
{
	int i;
	char c;
	
	// 配列の初期化
	for(i=0;i<bufsize;i++)
	{
		buf[i] = '\0';
	}
	
	i=0;
	
	while((c=getchar()) != '\n')
	{
		// 空白文字があるかどうか
		if(isspace(c))
		{
			if(i==0)
			{
				// その空白が最初の文字なら繰り返す
				continue;
			}
			else
			{
				// 文字が入力されていれば終了
				return 1;
			}
		}
		
		// 表示文字であるかどうか
		if(isprint(c))
		{
			// 特殊記号処理
			if(c == '+' || c == '-' || c == '=')
			{
				if(i==0)
				{
					// 前に何も文字がない場合
					return 1;
				}
				else
				{
					// すでに何かが入力されている
					return 1;
				}
			}
			
			// 文字配列への代入
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