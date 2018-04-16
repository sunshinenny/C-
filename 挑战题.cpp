#include<stdio.h>
int main()
{
	char first[1],second,third,fourth,fifth,sixth,seventh;
	int number,years,All,days,all,week,y,m,d;
	
	
	printf("请输入您的车牌号：");
	scanf("%c",first);
	second=getchar();
	third=getchar();
	fourth=getchar();
	fifth=getchar();
	sixth=getchar();
	seventh=getchar();
    scanf("%d",&number);	
	printf("请输入今天的日期：");
    scanf("%d.%d.%d",&y,&m,&d);

     switch (m)
	   {
		case 1:{if (d>=1&&d<=31)
		        {
		        days=0;
		        all=days+d;
		        }
				else printf("输入错误");
		       }break;
		case 2:{if (d>=1&&d<=29)
		        {
		        days=31;
		        all=days+d;
		        }
				else printf("输入错误");
		       }break;
		case 3:{if (d>=1&&d<=31)
		        {
		        days=31+28;
		        all=days+d;
		        }
				else printf("输入错误");
		       }break;
		case 4:{if (d>=1&&d<=30)
		        {
		        days=31+28+31;
		        all=days+d;
		        }
				else printf("输入错误");
		       }break;
		case 5:{if (d>=1&&d<=31)
		        {
		        days=31+28+31+30;
		        all=days+d;
		        }
				else printf("输入错误");
		       }break;
		case 6:{if (d>=1&&d<=30)
		        {
		        days=31+28+31+30+31;
		        all=days+d;
		        }
				else printf("输入错误");
		       }break;
		case 7:{if (d>=1&&d<=31)
		        {
		        days=31+28+31+30+31+30;
		        all=days+d;
				}
				else printf("输入错误");
		       }break;
		case 8:{if (d>=1&&d<=31)
		        {
		        days=31+28+31+30+31+30+31;
		        all=days+d;
		        }
				else printf("输入错误");
		       }break;
		case 9:{if (d>=1&&d<=30)
		        {
		        days=31+28+31+30+31+30+31+31;
		        all=days+d;
		        }
				else printf("输入错误");
		       }break;
		case 10:{if (d>=1&&d<=31)
		        {
		        days=31+28+31+30+31+30+31+31+30;
		        all=days+d;
		        }
				else printf("输入错误");
		       }break;
		case 11:{if (d>=1&&d<=30)
		        {
		        days=31+28+31+30+31+30+31+31+30+31;
		        all=days+d;
		        }
				else printf("输入错误");
		       }break;
		case 12:{if (d>=1&&d<=31)
		        {
		        days=31+28+31+30+31+30+31+31+30+31+30;
		        all=days+d;
		        }
				else printf("输入错误");
		       }break;
		default:{
		        printf("输入错误"); 
		        return 0; 
	            }
		
	   }
	   
	   
	years=y-2001;   
    if (y%4==0&&(y%100!=0||y%400==0))
    {
    	if (m>2)
    	{
    	All=years/4+1+years*365+all;
        }
        else All=years/4+years*365+all;
    }
        
	else All=years*365+all+years/4;

	week=All%7;
	
    switch (week) 
    
    {
    	case 1:{
		if (number!=5&&number!=0)
		{
		printf("查询结果如下：\n今天是周1\n您的车可以通行！\n");
		}
		else printf("查询结果如下：\n今天是周1\n您的车今日限行！\n");
    	}break;
    	
    	case 2:{
		if (number!=1&&number!=6)
		{
		printf("查询结果如下：\n今天是周2\n您的车可以通行！\n");
		}
		else printf("查询结果如下：\n今天是周2\n您的车今日限行！\n");
    	}break;
		
    	case 3:{
		if (number!=2&&number!=7)
		{
		printf("查询结果如下：\n今天是周3\n您的车可以通行！\n");
		}
		else printf("查询结果如下：\n今天是周3\n您的车今日限行！\n");
    	}break;	
		
    	case 4:{
		if (number!=3&&number!=8)
		{
		printf("查询结果如下：\n今天是周4\n您的车可以通行！\n");
		}
		else printf("查询结果如下：\n今天是周4\n您的车今日限行！\n");
    	}break;	
		
    	case 5:{
		if (number!=4&&number!=9)
		{
		printf("查询结果如下：\n今天是周5\n您的车可以通行！\n");
		}
		else printf("查询结果如下：\n今天是周5\n您的车今日限行！\n");
    	}break;						    	
    	
    	case 6:printf("查询结果如下：\n今天是周6\n周末车辆不限行");break; 
    	case 0:printf("查询结果如下：\n今天是周7\n周末车辆不限行");break;
    }
	
	
	
	
	
	return 0;
} 
