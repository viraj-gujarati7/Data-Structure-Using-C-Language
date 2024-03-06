#include <stdio.h>
typedef struct student
{
	int rlno;
	char name[10];
	float percent;
} stud;

main() 
{
	FILE *fp;
	stud s;
	int i,n;
	fp = fopen("stud.txt", "w");
	printf("How many records?");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		printf("\nRecord No. : %d\n",i);
		printf("Enter rlno: ");
		scanf("%d", &s.rlno);
		printf("Enter Name: ");
		scanf("%s", &s.name);
		printf("Enter percentage: ");
		scanf("%f", &s.percent);
		fprintf(fp, "%d, %s, %f\n", s.rlno, s.name, s.percent);
	}
	fclose(fp);
}
