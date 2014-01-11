#include <stdio.h>
#include <assert.h>

#define BUFSIZ 1024

int main(int argc, char *argv[])
{
	char str1[BUFSIZ];
	char str2[BUFSIZ];
	char str3[BUFSIZ];

	FILE *fp[argc-1];
	
	int i;
	char c;

	
	if(argc < 3)
	{
		fprintf(stderr,"usage: %s mix is no files...\n", argv[0]);
		return 1;
	}
	
	for(i=0;i<argc-1;i++)
	{
		printf("fp[%d] = [%s]\n",i,argv[i+1]);
		fp[i] = fopen(argv[i+1],"r");
		assert(fp[i] != NULL);
	}

	int j=0;
	
		for(i=0;i<argc-1;i++)
		{
			fgets(str1,BUFSIZ,fp[i]);
			while(str1[j] != '\0')
			{
				j++;
			}
			
			str1[j+1] = ' ';
			printf("%s",str1);

			
			
			
			j=0;
		}
		printf("\0");
	
//	while(fgets(str1,BUFSIZ,fp[0]) && fgets(str2,BUFSIZ,fp[1]) && fgets(str3,BUFSIZ,fp[2]))
//	{
//		printf("%s %s %s\n",str1,str2,str3);
//	}
	
	for(i=0;i<argc-1;i++)
	{
		fclose(fp[i]);
	}
	
	return 0;
}
