/*1、输入3个学生的年龄，按由小到大的顺序输出。其中，可定义交换函数Swap来实现2个整数的交换。(算法可参看P96，例4.2)*/
#include<stdio.h>
void Swap(int *num1,int *num2)
{
	int t;
	t=*num2;
	*num2=*num1;
	*num1=t;
}
int main()
{
	int year[3],i,j;
	int *py=year;
	printf("请输入3个学生的年龄：");
	for(i=0;i<3;i++) scanf("%d",&year[i]);
if(year[0]>year[1])
{
	Swap(&year[0],&year[1]);
}
if(year[0]>year[2])
{
	Swap(&year[0],&year[2]);
}
if(year[1]>year[2])
{
	Swap(&year[1],&year[2]);
}
printf("由小到大排序为：");
for(i=0;i<3;i++) printf("%d ",year[i]);
return 0;
}
