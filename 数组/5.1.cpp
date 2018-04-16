#include<stdio.h>
int main()
{
	int i,a[10],max,min,sum=0;
	
	printf("请输入10个整数：");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
		if(i==0) max=a[0];
	    else if(a[i]>max) max=a[i];
		
		if(i==0) min=a[0];
	    else if(a[i]<min) min=a[i];
	    	    
	}
	
	printf("最大值：%d\n最小值：%d\n平均值：%d\n",max,min,sum/10);
	
	
	return 0;
}
