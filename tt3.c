#include <stdio.h>
int main (void)
{  
	int ret,a,b;
	char c;
    printf("input the expression");
    scanf("%d%c%d",&a,&c,&b);
    switch(c)
    {
		
		case'+' :
		ret=a+b ;
		  
		break;
		case'-' :
		ret=a-b ; 
		break;
		case'*' :
		ret=a*b ;
		break;
		case'/' :
		
		if(b==0)
		printf("b!=0");
		
		else
		ret=a/b;
	    
		break;
		default:
		printf("unkown operaor!\n");
	   }
	    printf("%d\n",ret);
		return 0;
	   }
  
