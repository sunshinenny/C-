#include<stdio.h>
int main()
{
	double score;
	printf("Input a score:");
	scanf("%lf",&score);
	if (score>=0&&score<=100)
	{
		if(score>=90)
		printf("A");
		if(score>=80&&score<90)
		printf("B");
		if(score>=70&&score<80)
		printf("C");
		if(score>=60&&score<70)
		printf("D");
	    if(score<60)
		printf("E");
	}
	else printf("ÊäÈë´íÎó");
	return 0; 
}
