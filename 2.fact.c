#include<stdio.h>
int main()
{
	int i,n,f=1;
	printf("input\n");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		f=f*i;
	}
	printf("factorial = %d",f);
	return 0;
}
