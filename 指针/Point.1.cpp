/*1������3��ѧ�������䣬����С�����˳����������У��ɶ��彻������Swap��ʵ��2�������Ľ�����(�㷨�ɲο�P96����4.2)*/
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
	printf("������3��ѧ�������䣺");
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
printf("��С��������Ϊ��");
for(i=0;i<3;i++) printf("%d ",year[i]);
return 0;
}
