#include <stdio.h>
#include <assert.h>

int main(int args,char *argv[])
{
	int i,j;
	FILE *fp;
	
	fp = fopen(argv[1],"w");
	assert(fp != NULL);
	
	fprintf(fp, "<!DOCTYPE html>\n");
	fprintf(fp, "<html>\n");
	fprintf(fp, "<head><title>九九</title><meta charset=\"UTF-8\">\n");

	fprintf(fp, "<body>\n");	
	fprintf(fp, "\t<table border=\"1\">\n");
	
	for(i=1;i<=9;i++)
	{
		fprintf(fp,"\t<tr>\n");
		for(j=1;j<=9;j++)
		{
			
			fprintf(fp,"\t\t<td>%d * %d = %2d</td>\n",i,j,i*j);
			
		}
		fprintf(fp,"\t</tr>\n");
	}
	
	fprintf(fp, "\t</table>\n");	
	fprintf(fp, "</html>\n");
	
	
	fclose(fp);
	
	return 0;
}