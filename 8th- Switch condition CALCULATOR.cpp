#include<stdio.h>
int main()
{
	int a,b, c,d;
	int ch;
	printf("ENTER TWO NUMBERS = ");
	scanf("%d%d",&a,&b);
	printf("\nENTER CHOOSE 1 FOR ADDITION 2FOR SUBTRACTION 3 FOR MULTIPLICATION 4 FOR DIVISION ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			c=a+b;
			printf("ADDITION = %d",c);
			break;
		case 2:
			c=a-b;
			printf("SUBTRACTION = %d",c);
			break;	
		case 3:
			c=a*b;
			printf("MULTIPLECATION = %d",c);
			break;	
		case 4:
			c=a/b;
			printf("DIVISION = %d",c);
			break;
			
		default:
		printf("INVAILID CHOISE");				
	}
	return 0;
}
