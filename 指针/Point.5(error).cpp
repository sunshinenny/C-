/*5������һ�����������ַ�������ĳ���ַ��滻Ϊ�����һ���ַ���
����ԭ��Ϊ��void  ReplaceString(char *str,char ch1,char ch2);
���ܣ����ַ���str��ch1���ַ��滻Ϊch2��
*/
#include<stdio.h>
#include<string.h>
int main()
{
    void  ReplaceString(char *str,int n,int m);
	char i,j,n,m,s[100],*str=s;
	printf("������:");gets(s);fflush(stdin);
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
	printf("��ȷ����Ҫ���滻���ַ�����λ�ã����֣���");scanf("%d",&n);
	printf("��ȷ�������滻���ַ�����λ�ã����֣���");scanf("%d",&m);printf("\n");	 
	ReplaceString(s,n,m);
	printf("�滻��Ľ����");
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
