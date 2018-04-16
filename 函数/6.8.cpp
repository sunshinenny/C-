/*8、定义一个函数，用于将一个字符串反序存放。例如，原串为ABCDEF，则处理后的
字符串为：FEDCBA。原理：字符串中第一个字符与最后一个字符交换，第二个字符与倒数第二个字符交换，依次类推。*/

#include<stdio.h>
#include<string.h>
int main()
{
	void FANXU(char s[],int n);
	
	int n;
	char s[100];	
	printf("请输入一串字符：");
	gets(s);
	fflush(stdin);
	n=strlen(s);
	
	FANXU(s,n);

	return 0;
} 

void FANXU(char s[],int n)
{
	int i,j;
	char t;
	if(n%2==0)
	{
		for(i=0;i<n/2;i++)
		{
			for(j=n-1;j>=n/2;j--)
			{                  //  A B C D E   n=5
			    t=s[i];     //  0 1 2 3 4 5 6              1 2 3 4  0 1 2 3
			    s[i]=s[j];     //  A B C D     n=4         4 3 2 1  3 2 1 0
			    s[j]=t;     //  0 1 2 3                    4 1 3 2  3 0 2 1
			    break; 
			}
		}
	}
	if(n%2!=0)
	{
        for(i=0;i<=n/2-1;i++)
		{
			for(j=n-1;j>=n/2+1;j--)
			{
			    t=s[i];
			    s[i]=s[j];
			    s[j]=t;
			    break;
			}
		}		
	}
	for(i=0;i<n;i++)
	{
		printf("%c",s[i]);
	}
}
