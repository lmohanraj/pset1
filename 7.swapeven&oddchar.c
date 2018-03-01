#include <stdio.h>
#include<string.h>
int main()
{
	int i,n;
	char t,s[20];
	printf("input\n");
	scanf("%s",s);
	n=strlen(s);
	printf("output : ");
	for(i=0;i<n;i=i+2)
	{
		t=s[i];
		s[i]=s[i+1];
		s[i+1]=t;
		printf("%c%c",s[i],s[i+1]);
	}
	return 0;
}
