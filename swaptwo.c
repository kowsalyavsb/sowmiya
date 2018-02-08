#include <stdio.h>

int main()
{
	int s=34,m=45,t;
	t=s;
	s=m;
	m=t;
	printf("%d\t%d",s,m);
	return 0;
}
