#include <math.h>
#include <stdio.h>
int main (void)
{int x,a;
	//int a;	
	//printf("输入一个整数x(0<=x<=2000)\n");
	scanf("%d",&x);
	a=(int) sqrt(/*(double)*/x); 
	if(x%2==1&&x>3&&x!=a*a)
	{printf("1 1 0 0");
	}
	else if((x%2!=1&&x>3&&x!=a*a)||(x%2==1&&x<=3)||(x%2==1&&x==a*a))
	{printf("0 1 1 0");
	}
	else	
	{printf("0 0 0 1");
	}
	return 0;
}


