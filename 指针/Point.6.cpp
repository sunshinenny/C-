/*6����дһ���������ж��ַ����Ƿ�Ϊ���ġ���ν����ָ˳�Ⱥ������һ�����ַ�����
���磺��level������ABCCBA��*/
#include<stdio.h>
#include<string.h>
int main()
{
	void fun(char *p);
	char p[100];
	printf("������һ���ַ����ж��Ƿ�Ϊ���ģ�");
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
	if(flag==1) printf("���ǻ���");
	else printf("�ⲻ�ǻ���");
}
