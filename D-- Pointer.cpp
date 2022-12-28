#include<stdio.h>
int main()
{
	int *a,**b,c=10;
	a=&c;
	b=&a;
	
	printf("%d\n",c);
	printf("%d\n",&c);
	printf("%d\n",a);
	printf("%d\n",*a);
	printf("%d\n",b);
	printf("%d\n",*b);
	printf("%d",**b);
	
	return 0;
}
