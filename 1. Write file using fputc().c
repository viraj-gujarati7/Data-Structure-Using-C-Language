#include <stdio.h>

main() {
	FILE *fp = fopen("output.txt", "w");
	char data;
	if (fp == NULL) return 0;
	while((data=getchar()) !=EOF)
	{
		fputc(data, fp);
	}
	fclose(fp);
}
