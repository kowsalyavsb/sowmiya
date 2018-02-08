#include <stdio.h>

int main(void) {
    int s,k;
    scanf("%d",&s);
    if(s%2==0)
    {
    	printf("the given number:%d\n",s);
    }
    else
    {
    	k=s-1;
    }
    printf("nearest number:%d\n",k);
	return 0;
}
