#include<stdio.h>
int main()
{
	int a[3][3],i,j,s,p;
	
	printf("HELLO  WELCOME\n");
	printf("Enter number in 2d array= ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("MATRIX =  \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			printf("%d ", a[i][j]);
			
			if(j==2)
			{
				printf("\n");
			}
		}
	}
	
	
	printf("    THANK YOU");
	return 0;
}
