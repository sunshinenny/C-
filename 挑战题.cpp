#include<stdio.h>
int main()
{
	char first[1],second,third,fourth,fifth,sixth,seventh;
	int number,years,All,days,all,week,y,m,d;
	
	
	printf("���������ĳ��ƺţ�");
	scanf("%c",first);
	second=getchar();
	third=getchar();
	fourth=getchar();
	fifth=getchar();
	sixth=getchar();
	seventh=getchar();
    scanf("%d",&number);	
	printf("�������������ڣ�");
    scanf("%d.%d.%d",&y,&m,&d);

     switch (m)
	   {
		case 1:{if (d>=1&&d<=31)
		        {
		        days=0;
		        all=days+d;
		        }
				else printf("�������");
		       }break;
		case 2:{if (d>=1&&d<=29)
		        {
		        days=31;
		        all=days+d;
		        }
				else printf("�������");
		       }break;
		case 3:{if (d>=1&&d<=31)
		        {
		        days=31+28;
		        all=days+d;
		        }
				else printf("�������");
		       }break;
		case 4:{if (d>=1&&d<=30)
		        {
		        days=31+28+31;
		        all=days+d;
		        }
				else printf("�������");
		       }break;
		case 5:{if (d>=1&&d<=31)
		        {
		        days=31+28+31+30;
		        all=days+d;
		        }
				else printf("�������");
		       }break;
		case 6:{if (d>=1&&d<=30)
		        {
		        days=31+28+31+30+31;
		        all=days+d;
		        }
				else printf("�������");
		       }break;
		case 7:{if (d>=1&&d<=31)
		        {
		        days=31+28+31+30+31+30;
		        all=days+d;
				}
				else printf("�������");
		       }break;
		case 8:{if (d>=1&&d<=31)
		        {
		        days=31+28+31+30+31+30+31;
		        all=days+d;
		        }
				else printf("�������");
		       }break;
		case 9:{if (d>=1&&d<=30)
		        {
		        days=31+28+31+30+31+30+31+31;
		        all=days+d;
		        }
				else printf("�������");
		       }break;
		case 10:{if (d>=1&&d<=31)
		        {
		        days=31+28+31+30+31+30+31+31+30;
		        all=days+d;
		        }
				else printf("�������");
		       }break;
		case 11:{if (d>=1&&d<=30)
		        {
		        days=31+28+31+30+31+30+31+31+30+31;
		        all=days+d;
		        }
				else printf("�������");
		       }break;
		case 12:{if (d>=1&&d<=31)
		        {
		        days=31+28+31+30+31+30+31+31+30+31+30;
		        all=days+d;
		        }
				else printf("�������");
		       }break;
		default:{
		        printf("�������"); 
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
		printf("��ѯ������£�\n��������1\n���ĳ�����ͨ�У�\n");
		}
		else printf("��ѯ������£�\n��������1\n���ĳ��������У�\n");
    	}break;
    	
    	case 2:{
		if (number!=1&&number!=6)
		{
		printf("��ѯ������£�\n��������2\n���ĳ�����ͨ�У�\n");
		}
		else printf("��ѯ������£�\n��������2\n���ĳ��������У�\n");
    	}break;
		
    	case 3:{
		if (number!=2&&number!=7)
		{
		printf("��ѯ������£�\n��������3\n���ĳ�����ͨ�У�\n");
		}
		else printf("��ѯ������£�\n��������3\n���ĳ��������У�\n");
    	}break;	
		
    	case 4:{
		if (number!=3&&number!=8)
		{
		printf("��ѯ������£�\n��������4\n���ĳ�����ͨ�У�\n");
		}
		else printf("��ѯ������£�\n��������4\n���ĳ��������У�\n");
    	}break;	
		
    	case 5:{
		if (number!=4&&number!=9)
		{
		printf("��ѯ������£�\n��������5\n���ĳ�����ͨ�У�\n");
		}
		else printf("��ѯ������£�\n��������5\n���ĳ��������У�\n");
    	}break;						    	
    	
    	case 6:printf("��ѯ������£�\n��������6\n��ĩ����������");break; 
    	case 0:printf("��ѯ������£�\n��������7\n��ĩ����������");break;
    }
	
	
	
	
	
	return 0;
} 
