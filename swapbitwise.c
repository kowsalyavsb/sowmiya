#include<stdio.h>
int main()
{
int k,s;
scanf("%d%d",&k,&s);
printf("\n%d\t%d",k,s);
k=k^s;
s=k^s;
k=k^s;
printf("\n%d\t%d",k,s);
return 0;
}
