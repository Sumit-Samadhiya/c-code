#include<stdio.h>
int main()
{
		int a,b,c;
		printf("ENTER THREE NUMBERS = ");
		scanf("%d%d%d",&a,&b,&c);
		
		if(a>b)
		{
			if(a>c)
			{
				printf("GREATER NUMBER= %d",a);
			}
			else
			{
				printf("GREATER NUMBER= %d",c);
			}
		}
		else
		{
			if(b>c)
			{
				printf("GREATER NUMBER= %d",b);
			}
			else
			{
				printf("GREATER NUMBER= %d",c);
			}
		}
		
		return 0;
}
		
