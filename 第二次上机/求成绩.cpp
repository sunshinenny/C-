#include<stdio.h>
int main()
{
	float A,B,R,a,b,r,sum,average;
	printf("第1名同学期末成绩和平时成绩：");
	scanf("%f %f",&A,&B);
	R=A*7/10+B*3/10;
	printf("第1名同学总成绩为：");	
	printf("%.2f\n",R);
	
	printf("第2名同学期末成绩和平时成绩：");
	scanf("%f %f",&a,&b);
	r=a*7/10+b*3/10;
	printf("第2名同学总成绩为：");	
	printf("%.2f\n",r);
	
	printf("2位同学总成绩为");
	sum=R+r;
	printf("%.2f\n",sum);
	
	printf("平均成绩为");
	average=sum/2;
	printf("%.2f\n",average);
	return 0;
	
}
