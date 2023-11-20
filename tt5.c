#include <stdio.h>
int main(void)
{

	
	/*int f,e,a,b,c;
	//printf("please input a number(!=0)\n");
	scanf("%d%d",&b,&e);

	do{//printf("please input a your campared number\n");
		scanf("%d",&a);
		if(a==0)
		break;
		 else if(a>b)
		{max=a;
	min=b;
			
			}
		else 
		{c=a;
		a=b;	
		b=c;
		max=a;
		min=b;	
			}
		
		}while(a!=0);
	printf("%d %d",max,min);
	return 0;*/
	int a,b,c,max,min;
	scanf("%d%d",&a,&b);
	if(a>b)
	{max=a;
	min=b;}
	else
	{max=b;
	min=a;
	}
	do{scanf("%d",&c);
		if(c==0)
		break;
		if(max<=c)
		//a=c;
		max=c;
		else if(c<=min)
		//b=c;
		min=c;
		}while(c!=0);
		printf("%d %d",max,min);
		return 0;
	
}
