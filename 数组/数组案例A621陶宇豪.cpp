#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j,n,m,flag=1,score[100],cheak,t,s=1,number[100];
	char name[100][20],NAME[100],T[100];
	int n1=0,n2=0,n3=0,n4=0,n5=0;

	while(1)
	{ 	
	printf("-------------学生成绩信息管理-------------\n"); 
	printf("1.录入 2.显示 3.查找 4.排序 5.统计 0.退出 \n") ;
	printf("------------------------------------------\n");
	
	   printf("请输入选择项：");scanf("%d",&m);
	   switch(m)
	   {
	   case 1:{
	   	         printf("请输入学生人数：");scanf("%d",&n);
	             for(i=0;i<n;i++)
	             {
		         printf("请输入第%d个学生信息：\n",i+1);
		         printf("学号：");scanf("%d",&number[i]);
		         printf("姓名：");fflush(stdin);gets(name[i]);
		         printf("C语言成绩（0-100）："); scanf("%d",&score[i]);
					if(score[i]>100||score[i]<0)
		        	{
		        		printf("该成绩不合法，请重新输入！\n"); 
		        		i=i-1;
		        	    continue;
		        	}
       	            if(score[i]>90&&score[i]<=100) n1++;
       	            if(score[i]>80&&score[i]<=90) n2++;
       	            if(score[i]>70&&score[i]<=80) n3++;
       	            if(score[i]>60&&score[i]<=70) n4++;
       	            if(score[i]<60) n5++;
       	            
				 }
				 	             
				 system("pause");
				 system("cls");
              };break;
              
       case 2:{
       	            printf("%s\t%s\t%s\t\n","学号","姓名","C语言成绩");
					 for(i=0;i<n;i++)
       	          { 
       	             printf("%d\t%s\t%d\t",number[i],name[i],score[i]);
       	             printf("\n");
       	          }
				 system("pause");
				 system("cls");       	
              };break;
	   
	   case 3:{
	   	        printf("请输入姓名以用于查找：");
	            fflush(stdin);
	            gets(NAME);
	
	            for(i=0;i<n;i++)
	            {
		            if(strcmp(name[i],NAME)==0)
		            {
			            flag=0;
			            printf("学号：%d\n姓名：%s\nC语言成绩：%.d\n",number[i],name[i],score[i]);

		            }
	            }
	
	            if(flag==1) printf("本班无此人\n");

				 system("pause");
				 system("cls"); 
				 	   
	   	      };break;
	   
	   case 4:{
	   	          
	   	            printf("1-按学号排序（升序）  2-按成绩排序(降序)  0-返回 ：");
					scanf("%d",&cheak);
					
					switch(cheak)
					{ 
	   	
                case 1:{
                	    
				        for(i=0;i<n-1;i++)
                 	    {
            		       for(j=0;j<n-1-i;j++)
            		       {
          			          if(number[i]>number[i+1])
         			          {
       				             t=number[i];
      			                 number[i]=number[i+1];
      			           	     number[i+1]=t;
      			           	    
       				             strcpy(T,name[i]);
      			                 strcpy(name[i],name[i+1]);
      			           	     strcpy(name[i+1],T);
      			           	     
      			           	      t=score[i];
      			                  score[i]=score[i+1];
      			           	      score[i+1]=t;
        			            
            		          }
                 	       }
                 	    
       	             printf("%s\t%s\t%s\t\n","学号","姓名","C语言成绩");
					 for(i=0;i<n;i++)
       	          { 
       	             printf("%d\t%s\t%d\t",number[i],name[i],score[i]);
       	             printf("\n");
       	          }       	            
                 	    
                 	    
				        system("pause");
				        system("cls");                  	    
						}
						} ;break;	   	
                    
               case 2:{
                          for(i=0;i<n-1;i++)
                 	     {
            		        for(j=0;j<n-1-i;j++)
            		       {
          			          if(score[i]<score[i+1])
         			          {
       				              t=score[i];
      			                  score[i]=score[i+1];
      			           	      score[i+1]=t;
       				             
								 t=number[i];
      			                 number[i]=number[i+1];
      			           	     number[i+1]=t;
      			           	    
       				             strcpy(T,name[i]);
      			                 strcpy(name[i],name[i+1]);
      			           	     strcpy(name[i+1],T);      			           	      
        			          }
            		       }
            		       
       	               printf("%s\t%s\t%s\t\n","学号","姓名","C语言成绩");
					   for(i=0;i<n;i++)
       	            { 
       	               printf("%d\t%s\t%d\t",number[i],name[i],score[i]);
       	               printf("\n");
       	            }       	            
                 	              		       
				          system("pause");
				          system("cls");   
                         }   
	                  };break;
	           
			        case 0:system("cls");break;
			   
			        default:printf("输入错误,请重试\n");  
		           }
		       };break;
       case 5:{
                printf("90-100：%d\n80-90：%d\n70-80：%d\n60-70：%d\n0-60：%d\n",n1,n2,n3,n4,n5);
				system("pause");
				system("cls");        	         
              };break;
       case 0:return 0;break;
  
       default:{
	   printf("输入错误，请重试。");
	   system("cls");        
			   } 
              
       
       
   }
   }
return 0;    
} 
