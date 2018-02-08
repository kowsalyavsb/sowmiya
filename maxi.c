#include <stdio.h>

int main(void) {
int s[10],i,j,temp,num;
scanf("%d\n",&num);
for(i=1;i<=num;i++)
{
	scanf("%d\n",&s[i]);
}
for(i=1;i<=num;i++)
  {
	for(j=i+1;j<=num;j++)
	{
		if(s[i]>s[j])
		{
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
		}
	}
  }
  printf("%d\n",s[num]);
 
	return 0;
}
