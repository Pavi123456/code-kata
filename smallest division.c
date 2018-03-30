#include <stdio.h>
int main(void) 
{
	int a,b,len,i;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		len=a;
	}
	else
	{
		len=b;
	}
	for(i=2;i<=len;i++)
	{
		if((i%a==0) && (i%b==0))
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
