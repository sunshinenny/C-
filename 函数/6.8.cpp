/*8������һ�����������ڽ�һ���ַ��������š����磬ԭ��ΪABCDEF��������
�ַ���Ϊ��FEDCBA��ԭ���ַ����е�һ���ַ������һ���ַ��������ڶ����ַ��뵹���ڶ����ַ��������������ơ�*/

#include<stdio.h>
#include<string.h>
int main()
{
	void FANXU(char s[],int n);
	
	int n;
	char s[100];	
	printf("������һ���ַ���");
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
