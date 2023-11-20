#include <stdio.h>
int main(void)
{int a;
	scanf("%d",&a);
	int e=a,f=a;
	do{scanf("%d",&a);
		/*if(a==0)
		{break;
		}
		else*/ if(a>=e)
		{e=a;
        }
		else if(a<f)
		{f=a;
		}
			}while(a!=0);
	    printf("%d %d",e,f);
	    return 0;
}
