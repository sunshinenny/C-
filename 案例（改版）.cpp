#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Student
{
	int num;
	char name[20];
	double score;
};

	void Input(Student student[],int n);
	void Output(Student student[],int n);
    void Find(Student student[],int n);
    void Sort(Student student[],int n);
    void fun(Student student[],int n);

int main()
{

	int n,m;
	Student student[100];
	while(1)
	{
		printf("---------------ѧ���ɼ���Ϣ����---------------\n");
		printf(" 1.¼��  2.��ʾ  3.����  4.����  5.ͳ�� 0.�˳�\n");
		printf("----------------------------------------------\n");
		
		printf("������ѡ���");scanf("%d",&m);
		switch(m)
		{
			case 1:printf("������ѧ��������");
			       scanf("%d",&n);
			       Input(student,n);
				   system("pause");
				   system("cls");break;
				   
			case 2:Output(student,n);
			       system("pause");
				   system("cls");break;
				   
			case 3:Find(student,n);
			       system("pause");
				   system("cls");break;
			
			case 4:Sort(student,n);		       
			       system("pause");
			       system("cls");break;
			       
			case 5:fun(student,n);
			       system("pause");
			       system("cls");break;       
			
			case 0:printf("��лʹ��\n");
			       system("pause");
				   return 0;
			default:printf("�������������");
			        system("pause");
					system("cls");	   	   	   
		}
	}
	
return 0;	
}

void Input(Student student[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("�������%d��ѧ������Ϣ��\n",i+1);
		printf("ѧ�ţ�");scanf("%d",&student[i].num);fflush(stdin);
		printf("������");gets(student[i].name);fflush(stdin);
		printf("C���Գɼ�(0-100)��");scanf("%lf",&student[i].score);
		if(student[i].score<0||student[i].score>100) {printf("������� �����ԣ�\n");i=i-1;continue;}
	}
}

void Output(Student student[],int n)
{
	int i;
	printf("%s\t%s\t%s\t","ѧ��","����","C���Գɼ�");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%.2f",student[i].num,student[i].name,student[i].score);
		printf("\n"); 
	} 
}

void Find(Student student[],int n)
{
	Student t;
	int i,flag=1;
	char name[20];
	printf("�����������Բ��ң�");fflush(stdin);
	gets(name);fflush(stdin);
	for(i=0;i<n;i++)
	{
		if(strcmp(student[i].name,name)==0)
		{
			printf("������ϢΪ��\n");
			printf("ѧ�ţ�%d\n",student[i].num);
			printf("������%s\n",student[i].name);
			printf("C���Գɼ���%.2f\n",student[i].score);
			printf("\n");
			flag=0; 
		}
		
	}
	if(flag==1) printf("���޴���\n");
	
	 
}

void Sort(Student student[],int n)
{
	int i,j,cheak;
	Student t;
	printf("1-��ѧ����������    2-���ɼ����򣨽���   0-����\n");
	printf("������ѡ��:"); 
	scanf("%d",&cheak);
	
	switch(cheak)
	{
		case 1:for(i=0;i<n-1;i++)
		       {
		       	  for(j=0;j<n-i-1;j++)
		       	  {
		       	  	 if(student[j].num>student[j+1].num)
		       	  	 {
		       	  	 	t=student[j];
			            student[j]=student[j+1];
			            student[j+1]=t; 
		       	  	 }
		       	  }
		       };
			   Output(student,n);break;
		       
		case 2:for(i=0;i<n-1;i++)
		       {
		       	  for(j=0;j<n-i-1;j++)
		       	  {
		       	  	 if(student[j].score<student[j+1].score)
		       	  	 {
		       	  	 	t=student[j];
			            student[j]=student[j+1];
			            student[j+1]=t; 
		       	  	 }
		       	  }
		       };
			   Output(student,n);break;
		      
		case 0:printf("��лʹ��\n");break;
			   
		default:printf("�������������");  	   
	}
	
}

void fun(Student student[],int n)
{
	int i;
	int n1=0,n2=0,n3=0,n4=0,n5=0;
	for(i=0;i<n;i++)
	{
		if(student[i].score>=90&&student[i].score<=100) n1++;
		if(student[i].score>=80&&student[i].score<90) n2++;
		if(student[i].score>=60&&student[i].score<80) n3++;
		if(student[i].score<60) n4++;
	}
	printf("%s\t%s\t%s\t\n","������","����","ռ��");
	printf("%s\t%d\t%.2f%%\t\n","90-100",n1,(double)n1/n*100);
	printf("%s\t%d\t%.2f%%\t\n","80-90",n2,(double)n2/n*100);
	printf("%s\t%d\t%.2f%%\t\n","60-80",n3,(double)n3/n*100);
	printf("%s\t%d\t%.2f%%\t\n","0-60",n4,(double)n4/n*100);
}
