#include <stdio.h>
int main(void)
{
	int x,b1,b2,b3;
	printf("please enter an integer");
	scanf("%d",&x);
	b1=x/100;
	b2=(x-b1*100)/10;
	b3=x%10;
	printf("bit1=%d,bit2=%d,bit3=%d\n",b1,b2,b3);
	return 0;
}
	
	
	
