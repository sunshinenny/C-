#include<stdio.h>

int main()
{
	int g,m,x;
	printf("公鸡每只3元，母鸡每只5元，小鸡每只3元。现有100元钱，需要买30只鸡（3种鸡都要有），问公鸡、母鸡、小鸡各多少只？\n");

	
	for(g=1;g<=33;g++)
	{
		for(m=1;m<=20;m++)
		{
			for(x=1;x<=33;x++)
			{
				if(g+m+x==30&&g*3+m*5+x*3==100) printf("公鸡%d只,母鸡%d只,小鸡%d只",g,m,x);
			}
		}
		
		printf("\n");
	}
	
	
	
     return 0;
}
