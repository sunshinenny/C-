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
	printf("-------------ѧ���ɼ���Ϣ����-------------\n"); 
	printf("1.¼�� 2.��ʾ 3.���� 4.���� 5.ͳ�� 0.�˳� \n") ;
	printf("------------------------------------------\n");
	
	   printf("������ѡ���");scanf("%d",&m);
	   switch(m)
	   {
	   case 1:{
	   	         printf("������ѧ��������");scanf("%d",&n);
	             for(i=0;i<n;i++)
	             {
		         printf("�������%d��ѧ����Ϣ��\n",i+1);
		         printf("ѧ�ţ�");scanf("%d",&number[i]);
		         printf("������");fflush(stdin);gets(name[i]);
		         printf("C���Գɼ���0-100����"); scanf("%d",&score[i]);
					if(score[i]>100||score[i]<0)
		        	{
		        		printf("�óɼ����Ϸ������������룡\n"); 
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
       	            printf("%s\t%s\t%s\t\n","ѧ��","����","C���Գɼ�");
					 for(i=0;i<n;i++)
       	          { 
       	             printf("%d\t%s\t%d\t",number[i],name[i],score[i]);
       	             printf("\n");
       	          }
				 system("pause");
				 system("cls");       	
              };break;
	   
	   case 3:{
	   	        printf("���������������ڲ��ң�");
	            fflush(stdin);
	            gets(NAME);
	
	            for(i=0;i<n;i++)
	            {
		            if(strcmp(name[i],NAME)==0)
		            {
			            flag=0;
			            printf("ѧ�ţ�%d\n������%s\nC���Գɼ���%.d\n",number[i],name[i],score[i]);

		            }
	            }
	
	            if(flag==1) printf("�����޴���\n");

				 system("pause");
				 system("cls"); 
				 	   
	   	      };break;
	   
	   case 4:{
	   	          
	   	            printf("1-��ѧ����������  2-���ɼ�����(����)  0-���� ��");
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
                 	    
       	             printf("%s\t%s\t%s\t\n","ѧ��","����","C���Գɼ�");
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
            		       
       	               printf("%s\t%s\t%s\t\n","ѧ��","����","C���Գɼ�");
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
			   
			        default:printf("�������,������\n");  
		           }
		       };break;
       case 5:{
                printf("90-100��%d\n80-90��%d\n70-80��%d\n60-70��%d\n0-60��%d\n",n1,n2,n3,n4,n5);
				system("pause");
				system("cls");        	         
              };break;
       case 0:return 0;break;
  
       default:{
	   printf("������������ԡ�");
	   system("cls");        
			   } 
              
       
       
   }
   }
return 0;    
} 
