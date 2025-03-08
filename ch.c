#include<stdio.h>
#include<string.h>
int main()
{
	char com[100];
	int len=strlen(com);
	printf("enter sentence");
	gets(com);
	if((com[0]=='/' && com[1]=='*') ||(com[0]=='/' && com[1]=='/'))
	{
		if(com[len-2]=='/' && com[len-1]=='/')
		{
			printf("multiple");
		}
		else
		{
			printf("single");
		}
	}
	return 0;
}
