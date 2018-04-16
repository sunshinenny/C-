#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char number[100][20],name[100][20],NAME[20];
	float score[100];
	int i,n,flag=1;
	
	printf("请输入学生数：");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("请输入第%d个学生的信息：\n",i+1);
		printf("学号：");fflush(stdin);gets(number[i]);
		printf("姓名：");gets(name[i]);
		printf("C语言成绩：");scanf("%f",&score[i]);
			
	}
	
	system("pause");
	system("cls");
	
	printf("请输入姓名以用于查找：");
	fflush(stdin);
	gets(NAME);
	
	for(i=0;i<n;i++)
	{
		if(strcmp(name[i],NAME)==0)
		{
			flag=0;
			printf("学号：%s\n姓名：%s\nC语言成绩：%.2f\n",number[i],name[i],score[i]);

		}
	}
	
	if(flag==1) printf("本班无此人");
	
	return 0;
} 
