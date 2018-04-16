#include<stdio.h>
double Fact(double n)
{
	int i;
	double sum1=1;
	
	for(i=1;i<=n;i++)
	{
		sum1=sum1*i;
	}
return sum1;	
}

int main()
{
	int n,i;
	double sum2=0;
	printf("Input a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum2=sum2+Fact(i);
	}
	
	printf("1!+2!+3!+бнбн+n!=%.0f",sum2);
return 0;	
}
