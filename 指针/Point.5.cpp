/*5、定义一个函数，将字符串其中某个字符替换为另外的一个字符。
函数原型为：void  ReplaceString(char *str,char ch1,char ch2);
功能：将字符串str中ch1的字符替换为ch2。*/
#include<stdio.h>
#include<string.h>
int main()
{
	void ReplaceString(char *str,char ch1,char ch2);
	char str[100],ch1,ch2;
	printf("请输入一串字符：");gets(str);
	fflush(stdin);
	
	printf("请输入您想替换的字符：");scanf("%c",&ch1);
	fflush(stdin);
	printf("请输入用以替换的字符：");scanf("%c",&ch2);
	ReplaceString(str,ch1,ch2);
	puts(str);
return 0;	
} 

void ReplaceString(char *str,char ch1,char ch2)
{
	int i,n;
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]==ch1) 
		{
			str[i]=ch2;
		}
	}
	
	
	
}
