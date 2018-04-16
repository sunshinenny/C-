#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,n,i,score,n1=0,n2=0,n3=0,n4=0,n5=0;
	int sum=0,max,min;

    while (1)
    {
	printf("-------------学生成绩信息管理-------------\n");
	printf("      1、输入统计            0、退出      \n");
	printf("------------------------------------------\n");
	printf("请输入选择项：");
	scanf("%d",&x);
	switch(x)
	{
		
		case 1:{
		        printf("请输入要统计的学生个数：");
		        scanf("%d",&n);
		        
		        for (i=1;i<=n;i++)
		        {
		        	printf("请输入第%d个学生的C语言成绩（0-100）：",i);
		        	scanf("%d",&score);
		        	
					if(score>100||score<0) //判断输入是否错误 
		        	{
		        		printf("该成绩不合法，请重新输入！\n"); 
		        		i=i-1;
		        		/*fflush(stdin); 如果输入错误，是否会影响最大最小平均数？*/ 
		        	    continue;
		        	}	
		        	
		        	else 
					{
						if(i==1) max=score;
						if(i==1) min=score;
						sum=sum+score;
						if(score>max) max=score;
						if(score<min) min=score;
		        	    if(score>=90&&score<=100) n1++;
		        	    if(score>=80&&score<=89) n2++;
		        	    if(score>=70&&score<=79) n3++;
		        	    if(score>=60&&score<=69) n4++;
		        	    if(score>=0&&score<=59) n5++;
		        	    
					}
		        	

		        }
		        
				system("pause");  //清理输入界面 显示统计界面 
	            system("cls");        
				printf("最高分：%d\n",max);
	            printf("最低分：%d\n",min);
	            printf("平均成绩：%d\n",sum/n);
	            
	            printf("成绩分布情况：\n");
	            printf("分数段     人数      百分比\n");
				printf("100-90       %d        %.2f%%\n",n1,((float)n1/n)*100);
				printf(" 89-80       %d        %.2f%%\n",n2,((float)n2/n)*100);
				printf(" 79-70       %d        %.2f%%\n",n3,((float)n3/n)*100);
				printf(" 69-60       %d        %.2f%%\n",n4,((float)n4/n)*100);
				printf("  59-0       %d        %.2f%%\n",n5,((float)n5/n)*100);
				
				printf("******************************************\n");		
										
			    };break;
			    
		case 0:{
			    printf("感谢您的使用\n");
			    system("pause");
			    return 0;
		       };
		default:printf("输入错误，请重试");
			    
		
	}
			        	
		        		
    system("pause"); 
	system("cls");

	
    }
	return 0;
}
