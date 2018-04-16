#include<stdio.h>
int main()
{
	int n,m,i,k;
	
	for(n=4,m=1;n>=1,m<=5;n--,m=m+2)
	{
		for(i=n;i>=1;i--) printf(" ");
		
		for(k=0;k<m;k++) printf("*");
		
		printf("\n");


	}
	
		for(n=1,m=7;n<=4,m>=1;n++,m=m-2)
	{
		for(i=0;i<n;i++) printf(" ");
		
		for(k=m;k>=1;k--) printf("*");
		
		printf("\n");


	}
	

	return 0;
}
