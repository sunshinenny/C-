#include<stdio.h>
int main()
{
	int i,k=0,m,n,min;
	printf("Input two number:");
	scanf("%d %d",&m,&n);

    min=(m<n)?m:n;

	for(i=min-k;i>1;k++)
	{
		if(m%i==0&&n%i==0) break;



	}
	
	printf("%d��%d�����Լ��Ϊ��%d\n",m,n,i);
	printf("%d��%d����С������Ϊ��%d\n",m,n,m*n/i);
     return 0;
}


