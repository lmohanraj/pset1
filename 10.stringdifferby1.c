#include<stdio.h>
#include<string.h>
int main()
{
	int i,c=0,n1,n2;
	char s1[20],s2[20];
	printf("input\n");
	scanf("%s%s",s1,s2);
	n1=strlen(s1);
	n2=strlen(s2);
	if(n2>n1)
	n1=n2;
	for(i=0;i<n1;i++)
	{
		if(s1[i]!=s2[i])
		c++;
	}
	if(c==1)
	printf("yes");
	else
	printf("no");
	return 0;
}
