
#include<stdio.h>
int Prim(int n)
{
int i,j;
	
for(i=2;i<n;i++)
{
if(n%i==0)
break;	
}


if(i==n) return 1;
else return 0;	 

}

int main()
{
	int i,k=0;
	for(i=1;i<=1000;i++)
	{
		if(Prim(i)==1) 
		{
			printf("%d ",i);
			k++;
		}
		else continue;
		if(k%10==0) printf("\n");
		
	}
	
return 0;	
}

	
	
