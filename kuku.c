#include <stdio.h>

int main(int args,char *argv[])
{
	int i,j;
	
	printf("<!DOCTYPE html>\n");
	printf("<html>\n");
	printf("<head><title>九九</title><meta charset=\"UTF-8\">\n");

	printf("<body>\n");	
	printf("<table>\n");
	
	for(i=1;i<=9;i++)
	{
		printf("<tr>\n");
		for(j=1;j<=9;j++)
		{
			printf("<td> %2d </td>\n",i*j);
		}
		printf("</tr>\n");
	}
	
	printf("</table>\n");	
	printf("</html>\n");
	
	return 0;
}