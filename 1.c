#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	/*int i;
	for(i=0;i<3;i++)
	{
		printf("i=%d: ",i);
        for(i=0;i<4;i++)
        {
			printf("i=%d\t",i);
		}
		printf("\n");
			
	}
	return 0;*/
	int m,n,a;
	for(m=1;m<10;m++)
	{
		for (n=1;n<=m;n++)
		{
			a=m*n;
		    for(n=1;n<10;n++) 
		    {
				printf("%*s",4n-4,"");
				puts(a);
			}
			
		}
		printf("\n");
	}
	return 0;
}	
	
	
