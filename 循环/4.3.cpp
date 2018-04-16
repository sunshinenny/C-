#include<stdio.h>
int main()
{
	int a,b,c,x=-1;
	
	for (a=1;a<=9;a++)
	{
	
	    for (b=1,c=1;b<=9&&b>=1;b++)
	    {
		    c=a*b;
		    if (b==9-x) break;
		    printf("%2d*%d=%d   ",a,b,c);



	    }
		    
	printf("\n");	    
	x++;
	
	
    }
	
	
     return 0;
}
