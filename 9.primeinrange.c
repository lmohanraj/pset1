#include<stdio.h>
int main()
{
	int a,b,c=0,i,j,p=0;
	printf("inputs\n");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
			c++;
			}
		}
		if(c>2);
		else
		p++;
	}
	printf("output : %d ",p);
	return 0;
}
