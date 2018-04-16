#include<stdio.h>
int main()
{
	int i,g,s,b;
	
	for(i=100;i<=999;i++)
	{
		b=i/100;
		s=(i%100)/10;
		g=i-b*100-s*10;
		
		if(i==b*b*b+s*s*s+g*g*g) printf("%d 该数为水仙花数\n",i);
		
		
		
	}
	
	
	
	
	
	
	
	
     return 0;
}
