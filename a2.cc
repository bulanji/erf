#include <stdio.h>
int power(inta,intb)
{
	int n=0,m;
	while(n<=b)
	{
		m=a*m;
		n=n+1;
		return m;
	}
}
int main(void)
{
	int A,B,C,e,f;
	scanf("%d%d%d",&A,&B,&C);
	e=power(A,C);
	f=power(B,C);
	if(e<f)
	{
		printf("<");
	}
	else if(e>f)
	{
	    printf(">");
	}
	else(e=f)
	{
		printf("=");
	}
	return 0;
}
