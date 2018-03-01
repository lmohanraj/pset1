#include <stdio.h>
#include<string.h>
int main()
{
	int i,n;
	char s[20];
	printf("input\n");
	scanf("%s",s);
	n=strlen(s);
	printf("output : ");
	for(i=n-1;i>=0;i--)
	{
		printf("%c",s[i]);
	}
	return 0;
}
