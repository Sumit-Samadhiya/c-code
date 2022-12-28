#include<stdio.h>
int multi();
int div();


int add()
{
	int a,b,c;
	printf("Enter two number= ");
	scanf("%d%d",&a,&b);
	
	c=a+b;
	printf("addition = %d\n",c);
}

int sub()
{
	int a,b,c;
	printf("Enter two number= ");
	scanf("%d%d",&a,&b);
	
	c=a-b;
	printf("subtract = %d\n",c);
}



int main()
{
	printf("\n  BASIC CALCULATER USING FUNCTION           \n\n");
	printf("            WELCOME     \n\n");
	add();
	sub();
	multi();
	div();
}

int multi()
{
	int a,b,c;
	printf("Enter two number= ");
	scanf("%d%d",&a,&b);
	
	c=a*b;
	printf("multiplication = %d\n",c);
}
int div()
{
	int a,b,c;
	printf("Enter two number= ");
	scanf("%d%d",&a,&b);
	
	c=a/b;
	printf("divied = %d",c);
}
