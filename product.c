#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=a*b;
	if(c%2==0)
	{
		printf("the product of two no is even  %d\n",c);
	}
	else
	{
		printf("the product of two no is odd %d\n",c);
	}
	return 0;
}
