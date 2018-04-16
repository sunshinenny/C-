#include<stdio.h>
int main()
{
	int n,i,j,sum1=1,sum2=1;
    printf("请确定n*n阶矩阵行数列数：");
	scanf("%d",&n) ;
	printf("请输入n*n阶矩阵：\n");	
	
	int a[n][n];
	
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
		    scanf("%d",&a[i][j]);
	    }
	
    }
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	    	if(i==j) sum1=sum1*a[i][j];
	    	if(j==n-1-i) sum2=sum2*a[i][j];
		    printf("%d ",a[i][j]);
		    if(j+1==n) printf("\n");
	    }
	
    }	
	
	printf("%d %d",sum1,sum2);
	
	return 0;
}
