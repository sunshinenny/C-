#include<stdio.h>
int main()
{
	char ch1,ch2,ch3,ch4;
	printf("请输入登录密码（4位）：");
	scanf("%c%c%c%c",&ch1,&ch2,&ch3,&ch4);
	printf("加密后的密码为：");
	printf("%c%c%c%c",ch1+5,ch2+5,ch3+5,ch4+5);
	return 0;
}
