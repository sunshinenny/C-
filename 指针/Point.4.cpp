#include<stdio.h>
int main()
{
	void Inv(int *s,int n);
	int i,n,num[100],*s=num;
	printf("������������������ָ�����");scanf("%d",&n);
	printf("������������������֣�");
	for(i=0;i<n;i++) scanf("%d",&num[i]);
	Inv(s,n);
return 0;	
} 

void Inv(int *s,int n)
{
	int i;
	printf("�������Ϊ��");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",*(s+i));
	}
}
