#include <stdio.h>
int x,y;
void swap();
int main(void)
{
	
	scanf("%d%d",&x,&y);
	swap(x,y);
	printf("x=%d,y=%d\n",x,y);
	
}
void swap()
{
	static int  cnt=1;
	//printf("qing x=%d,y=%d\n",x,y);
	int tmp=x;
	x=y;
	y=tmp;
	printf("交换后 x=%d,y=%d\n",x,y);
	printf("交换了 %d 次\n",cnt);
	cnt++;
	
}
