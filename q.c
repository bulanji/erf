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
	
	printf("qing x=%d,y=%d\n",x,y);
	int tmp=x;
	x=y;
	y=tmp;
	printf("hou x=%d,y=%d\n",x,y);
	
}
