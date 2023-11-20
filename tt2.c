#include <stdio.h>
int main()
{  int a,b,c;
	printf("input three number");
	scanf("%d%d%d",&a,&b,&c);
	if((a<60&&b>=60&&c>=60) || (b<60&&a>=60&&c>=60) || (c<60&&b>=60&&a>=60))
	{
	printf("%d\n",1);
	}
	else
	{
	printf("%d\n",0);
}
	return 0;
}
