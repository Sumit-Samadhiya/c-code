#include<stdio.h>
int main()
{
	int a[7],i,r;
	
	printf(" Hello welcome\n");
	
	printf("Enter the number= ");
	
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("PRINTED ELEMENT ");
	
	for(i=0;i<7;i++)
	{
		printf("%d",a[i]);
	}
}
