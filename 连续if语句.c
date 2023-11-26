#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a+b<=c||a+c<=b||c+b<=a)
	{
		printf("不是三角形");
	}
	else if(a*a+b*b==c*c||c*c+a*a==b*b||c*c+b*b==a*a)
	{
		printf("直角三角形");
	}
	
	else if((a==b)&&(a==c))
	{
			printf("等边三角形");
	}
	else if(a==b||b==c||a==c)
	{
		printf("等腰三角形");
	}
	else
	{
	    printf("普通三角形");	
	}
	
}
