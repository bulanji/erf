#include <stdio.h>
int main(void)
{
	
	double e=1,m,x;
	int n=1;
	scanf("%lf",&m);
	for(x=1;1/(x*n)>=m;n++)
	{
		x=x*n;
		e=e+1/x;                                                                                                                                                                              
	}
	printf("e=%f",e);
	return 0;
}
	
