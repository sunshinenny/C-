#include<stdio.h>
#include<math.h>
int main()
{
	double a,x,b,c;
	printf("ax*x+bx+c=0\n");
	printf("输入a,b,c：");
	scanf("%lf %lf %lf",&a,&b,&c);
	if ((a<0&&a>=0)||(b<0&&b>=0)||(c<0&&c>=0))
	{
	if (a==0)
	printf("这是一次函数\n");
	if (b*b-4*a*c==0)
	printf("有两个相等的实根\n");
	if ((b*b-4*a*c)>0)
	printf("有两个不相等的实根\n");
	if ((b*b-4*a*c)<0)
	printf("有两个共轭复根\n");	
    }
    else printf("输入错误");
	return 0;
}
