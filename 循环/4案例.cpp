#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,n,i,score,n1=0,n2=0,n3=0,n4=0,n5=0;
	int sum=0,max,min;

    while (1)
    {
	printf("-------------ѧ���ɼ���Ϣ����-------------\n");
	printf("      1������ͳ��            0���˳�      \n");
	printf("------------------------------------------\n");
	printf("������ѡ���");
	scanf("%d",&x);
	switch(x)
	{
		
		case 1:{
		        printf("������Ҫͳ�Ƶ�ѧ��������");
		        scanf("%d",&n);
		        
		        for (i=1;i<=n;i++)
		        {
		        	printf("�������%d��ѧ����C���Գɼ���0-100����",i);
		        	scanf("%d",&score);
		        	
					if(score>100||score<0) //�ж������Ƿ���� 
		        	{
		        		printf("�óɼ����Ϸ������������룡\n"); 
		        		i=i-1;
		        		/*fflush(stdin); �����������Ƿ��Ӱ�������Сƽ������*/ 
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
		        
				system("pause");  //����������� ��ʾͳ�ƽ��� 
	            system("cls");        
				printf("��߷֣�%d\n",max);
	            printf("��ͷ֣�%d\n",min);
	            printf("ƽ���ɼ���%d\n",sum/n);
	            
	            printf("�ɼ��ֲ������\n");
	            printf("������     ����      �ٷֱ�\n");
				printf("100-90       %d        %.2f%%\n",n1,((float)n1/n)*100);
				printf(" 89-80       %d        %.2f%%\n",n2,((float)n2/n)*100);
				printf(" 79-70       %d        %.2f%%\n",n3,((float)n3/n)*100);
				printf(" 69-60       %d        %.2f%%\n",n4,((float)n4/n)*100);
				printf("  59-0       %d        %.2f%%\n",n5,((float)n5/n)*100);
				
				printf("******************************************\n");		
										
			    };break;
			    
		case 0:{
			    printf("��л����ʹ��\n");
			    system("pause");
			    return 0;
		       };
		default:printf("�������������");
			    
		
	}
			        	
		        		
    system("pause"); 
	system("cls");

	
    }
	return 0;
}
