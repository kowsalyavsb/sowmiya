#include<stdio.h>
int main()
{
int i,n,k=0,a=1,temp;
scanf("%d",&n);
printf("%d\n%d\n",k,a);
for(i=0;i<n;i++)
{
temp=k+a;
k=a;
a=temp;
printf("%d\n",a);
}
return 0;
}
 
