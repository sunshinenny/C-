/*5������һ�����������ַ�������ĳ���ַ��滻Ϊ�����һ���ַ���
����ԭ��Ϊ��void  ReplaceString(char *str,char ch1,char ch2);
���ܣ����ַ���str��ch1���ַ��滻Ϊch2��*/
#include<stdio.h>
#include<string.h>
int main()
{
	void ReplaceString(char *str,char ch1,char ch2);
	char str[100],ch1,ch2;
	printf("������һ���ַ���");gets(str);
	fflush(stdin);
	
	printf("�����������滻���ַ���");scanf("%c",&ch1);
	fflush(stdin);
	printf("�����������滻���ַ���");scanf("%c",&ch2);
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
