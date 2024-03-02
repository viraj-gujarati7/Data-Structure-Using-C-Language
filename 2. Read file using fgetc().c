#include <stdio.h>

main() 
{
	FILE *fp = fopen("output.txt", "r");
	char data;
	while((data=fgetc(fp))!=EOF)
	{
		putchar(data);
	}
	fclose(fp);
}
