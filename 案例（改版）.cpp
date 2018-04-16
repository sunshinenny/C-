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
		printf("---------------学生成绩信息管理---------------\n");
		printf(" 1.录入  2.显示  3.查找  4.排序  5.统计 0.退出\n");
		printf("----------------------------------------------\n");
		
		printf("请输入选择项：");scanf("%d",&m);
		switch(m)
		{
			case 1:printf("请输入学生人数：");
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
			
			case 0:printf("感谢使用\n");
			       system("pause");
				   return 0;
			default:printf("输入错误，请重试");
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
		printf("请输入第%d个学生的信息：\n",i+1);
		printf("学号：");scanf("%d",&student[i].num);fflush(stdin);
		printf("姓名：");gets(student[i].name);fflush(stdin);
		printf("C语言成绩(0-100)：");scanf("%lf",&student[i].score);
		if(student[i].score<0||student[i].score>100) {printf("输入错误 请重试：\n");i=i-1;continue;}
	}
}

void Output(Student student[],int n)
{
	int i;
	printf("%s\t%s\t%s\t","学号","姓名","C语言成绩");
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
	printf("请输入姓名以查找：");fflush(stdin);
	gets(name);fflush(stdin);
	for(i=0;i<n;i++)
	{
		if(strcmp(student[i].name,name)==0)
		{
			printf("此人信息为：\n");
			printf("学号：%d\n",student[i].num);
			printf("姓名：%s\n",student[i].name);
			printf("C语言成绩：%.2f\n",student[i].score);
			printf("\n");
			flag=0; 
		}
		
	}
	if(flag==1) printf("查无此人\n");
	
	 
}

void Sort(Student student[],int n)
{
	int i,j,cheak;
	Student t;
	printf("1-按学号排序（升序）    2-按成绩排序（降序）   0-返回\n");
	printf("请输入选项:"); 
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
		      
		case 0:printf("感谢使用\n");break;
			   
		default:printf("输入错误，请重试");  	   
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
	printf("%s\t%s\t%s\t\n","分数段","人数","占比");
	printf("%s\t%d\t%.2f%%\t\n","90-100",n1,(double)n1/n*100);
	printf("%s\t%d\t%.2f%%\t\n","80-90",n2,(double)n2/n*100);
	printf("%s\t%d\t%.2f%%\t\n","60-80",n3,(double)n3/n*100);
	printf("%s\t%d\t%.2f%%\t\n","0-60",n4,(double)n4/n*100);
}
