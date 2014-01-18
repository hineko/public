#include <stdio.h>
#include <ctype.h>
#include <string.h>

int strings(char *buf, int bufsize)
{
	int i = 0;
	char c;
	
	// 配列の初期化
	memset(buf,'\0',bufsize);
	
	while((c=getchar()) != EOF)
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
					buf[i] = c;
					return 1;
				}
				else
				{
					// すでに何かが入力されている
					buf[i++] = ']';
					buf[i++] = '\n';
					buf[i++] = '[';
					buf[i] = c;
					// これはひどい？
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