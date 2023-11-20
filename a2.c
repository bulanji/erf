#include <stdio.h>
#include <math.h>
int main(void)
{
    int C;
    double A,B;
    double e,f;
    if((1<C<10^9)&&(-10^9<A<10^9)&&(-10^9<B<10^9))
	{scanf("%lf%lf%d",&A,&B,&C);
	e= pow(A,C);
	f= pow(B,C);
	if(e<f)
	{
		printf("<\n");
	}
	else if(e>f)
	{
	    printf(">\n");
	}
	else
	{
		printf("=\n");
	}
   }
else
 break;
}
