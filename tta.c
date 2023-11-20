#include <stdio.h>
int main(void)
    {
		/*int sum,i,j;
	  for (i=1,j=100;i<=j;i++,j--)	
		{
			sum = sum+i+j;
			printf("sum=%d\n",sum);
		}
		printf("sum=%d\n",sum);
		return 0
		/*int s1=0,sum=0,n=-1;
		while (s1>=0)
			{/*scanf("%d\n",&s1);
			if(s1<0)
			break;*/
			//sum=sum+s1;	
			//printf("sum=%d\n",sum);	
			//n++;
			/*scanf("%d",&s1);
			}
		
		printf("%d个同学,平均成绩%d\n",n,sum/n);*/
		int j=1,n=1,N;
		printf("please enter a number");
		scanf("%d",&N);
		while(n<=N)
		{
			j =j*n;
			n++;
		}
		printf("N!=%d\n",j);
		
	}
