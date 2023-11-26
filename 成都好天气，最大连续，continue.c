#include <stdio.h>
int main(void)
{
	int n,a,b;
	scanf("%d\n",&n);
	int i=0,m=0,x=0,t=0;
	while(i<n)
	{
		scanf("%d%d",&a,&b);
		i=i+1;
		if((23<=a)&&(a<=28)&&(30<=b)&&(b<=80))
		{
			m=m+1;
			x++;
		}
		else
		{
            x=0;
            continue;	    
		}
		if(t<x)
		{
		   t=x;
		}
	}
	printf("%d %d",m,x);
}
