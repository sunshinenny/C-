/*5、定义一个函数，将字符串其中某个字符替换为另外的一个字符。
函数原型为：void  ReplaceString(char *str,char ch1,char ch2);
功能：将字符串str中ch1的字符替换为ch2。
*/
#include<stdio.h>
#include<string.h>
int main()
{
    void  ReplaceString(char *str,int n,int m);
	char i,j,n,m,s[100],*str=s;
	printf("请输入:");gets(s);fflush(stdin);
	j=strlen(s);
	for(i=0;i<j;i++)
	{
		printf("%3d",i+1);
	}
	printf("\n");
	for(i=0;i<j;i++)
	{
		printf("%3c",*(str+i));
	}	
	printf("\n");
	printf("请确定将要被替换的字符所在位置（数字）：");scanf("%d",&n);
	printf("请确定用来替换的字符所在位置（数字）：");scanf("%d",&m);printf("\n");	 
	ReplaceString(s,n,m);
	printf("替换后的结果：");
/*	for(i=0;i<j;i++)
	{
		printf("%c",*(str+i));
	}*/
	puts(s);
		
return 0;	
} 

void  ReplaceString(char *str,int n,int m)
{
	char t[1]; 
	strcpy(t,(str+m-1));
	strcpy((str+m-1),(str+n-1));
	strcpy((str+n-1),t);
}
