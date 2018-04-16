#include<stdio.h>
int main()
{
	int i,k;
	
	for(i=100;i<=300;i++)
	{

		 for(k=2;k<i;k++)
		 {
		 	if(i%k==0) break;
		 	if(k==i-1) 
			 {
		 	  printf("%d\n",i);
			  break;
		     }
		 }

	} 
	
	
	
	
	return 0;
	
} 
