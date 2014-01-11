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
		// �󔒕��������邩�ǂ���
		if(isspace(c))
		{
			if(i==0)
			{
				// ���̋󔒂��ŏ��̕����Ȃ�J��Ԃ�
				continue;
			}
			else
			{
				// ���������͂���Ă���ΏI��
				return 1;
			}
		}
		
		// �\�������ł��邩�ǂ���
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