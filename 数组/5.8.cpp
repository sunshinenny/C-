#include<stdio.h>
int main()
{
	int i,j,t,score[5][3],sum[5]={0};
	for(i=0;i<5;i++)
	{
	    printf("请输入第%d个学生的3门成绩：",i+1);
	    for(j=0;j<3;j++)
	    {
		    scanf("%d",&score[i][j]);
		    sum[i]=sum[i]+score[i][j]; 
	    }

    }
    
    for(i=0;i<4;i++)
    {
    	for(j=0;j<4-i;j++)
    	{
    		if(sum[i]<sum[i+1])
    		{
    			t=sum[i];
    			sum[i]=sum[i+1];
    			sum[i+1]=t;	
    		}
    		
    	}  	
    }
	    
    for(i=0;i<5;i++)
    printf("第%d个学生的总成绩为：%d\n",i+1,sum[i]);

    printf("由大到小排序为：\n");
	    
    for(i=0;i<5;i++)
    printf("%d ",sum[i]);
    

	return 0;
}
