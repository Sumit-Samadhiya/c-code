#include<stdio.h>
int main()
{
	int a,b;
	a=7;
	b=3;
	
	printf("ARITHMATIC OPERATOR = ");
	printf("%d\n",a-b);                  //output 4.
	
	printf("RELATIONAL OPERATOR = ");
	printf("%d\n",a<b);                 //output 0.
	
	printf("LOGICAL OPERATOR = ");
	printf("%d\n", a<b && b>a);          //output 0.
	
	printf("BITWISE OPERATOR = ");
	printf("%d\n",a&b);                   //output 3.
	
	printf("INCREEMENT OPERATOR = ");
	printf("%d\n",++a);                 //output 8.
	
	printf("Ternary OPERATOR = ");
	printf("%d",a>b?a:b);                //output 8.
	
	return 0;
}
