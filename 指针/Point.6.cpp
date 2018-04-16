/*6、编写一个函数，判断字符串是否为回文。所谓回文指顺度和逆读都一样的字符串。
例如：“level”，“ABCCBA”*/
#include<stdio.h>
#include<string.h>
int main()
{
	void fun(char *p);
	char p[100];
	printf("请输入一串字符以判断是否为回文：");
	gets(p);
	fflush(stdin);
	
	fun(p);
return 0;	
}

void fun(char *p)
{
	int i,n,flag=1;
	n=strlen(p);
	for(i=0;i<n/2;i++)
	{
		if(*(p+i)==*(p+n-i-1)) continue
		
		
		
		
		;
		else flag=0;
	}
	if(flag==1) printf("这是回文");
	else printf("这不是回文");
}
