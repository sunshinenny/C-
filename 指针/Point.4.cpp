#include<stdio.h>
int main()
{
	void Inv(int *s,int n);
	int i,n,num[100],*s=num;
	printf("请输入您想输入的数字个数：");scanf("%d",&n);
	printf("请输入您想输入的数字：");
	for(i=0;i<n;i++) scanf("%d",&num[i]);
	Inv(s,n);
return 0;	
} 

void Inv(int *s,int n)
{
	int i;
	printf("逆序输出为：");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",*(s+i));
	}
}
