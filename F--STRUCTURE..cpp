#include<stdio.h>

struct student
{
	int roll;
	char name;
	int marks[5];
}s;

int main()
{
	int i;
	for(i=1;i<5;i++)
{
	struct student s;
	float avg;
	int total=0,j; 
	printf("Enter the roll no = ");
	scanf("%d",&s.roll);
	printf("Enter the name = ");
	scanf("%s",&s.name);
	printf("Enter the mark = ");
	
	for(j=0;j<5;j++);
	{
		scanf("%d",&s.marks[j]);
		total=total+s.marks[j];
		avg= total/5;
	}
	printf("AVERAGE OF NUMBERS = ");
	printf("%f",avg);
	
}
}

