#include<stdio.h>
int main()
{
	float a,b,c,d,max;
	printf("Input four number:");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	max=a;
	if (b>max) max=b;
	if (c>max) max=c;
	if (d>max) max=d;
	printf("max=%f",max);
	return 0;
}
