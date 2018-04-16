#include<stdio.h>
int Gcd(int n,int m)
{
	int x;
	if(n>m)
	{
		x=m;
		m=n;
		n=x;
	}
	
	while(m%n!=0)
	{
		x=m%n;
		m=n;
		n=x;
	}
	
return n;	
	
}

int main()
{
	int n,m;
	printf("Input two number:");
	scanf("%d %d",&n,&m);
	printf("Gcd=%d\n",Gcd(n,m));
	printf("Glm=%d\n",m*n/Gcd(n,m));

	return 0;	
}
