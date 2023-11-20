#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	long long int A,B,C;
	scanf("%lld %lld %lld",&A,&B,&C);
	if(C%2==0)
	{
		long long int x=abs(A),y=abs(B);
		if(x<y)
		{
			printf("<\n");
		}
		else if(x==y)
		{
			printf("=\n");
		}
		else
		{
			printf(">\n");
		}
	}
	else
	{
		if(A<B)
		{
			printf("<\n");
		}
		else if(A>B)
		{
			printf(">\n");
		}
		else
		{
			printf("=\n");
		}
	}
}
