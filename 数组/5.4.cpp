#include<stdio.h>
int main()
{
	int a[5][3];
	int i,j,sum[5]={0};
	
	for(i=0;i<5;i++)
	{
		printf("请输入第%d个学生的3门成绩：",i+1);
		
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			sum[i]=sum[i]+a[i][j];
		}
		
	}
	
	for(i=0;i<5;i++)
	{
		printf("第%d个学生的平均成绩为：%d\n",i+1,sum[i]/3);
	}

	return 0;
} 
