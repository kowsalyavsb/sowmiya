#include <stdio.h>
int main()
{
int n,i,sum=0;
printf("enter the n value \n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("sum=%d\n",sum);
return 0;
}
