/*2、定义一个存储5个员工信息（包含编号，姓名，工资）的结构体数组。
1）定义输入员工信息的函数Input；
2）定义输出员工信息的函数Output；
3）定义对员工工资进行排序的函数Sort
3）定义按编号进行查找的函数Search，若找到，则返回该员工在数组中的下标；如果没找到，则返回-1。
在main函数中调用以上函数实现相应的功能。
*/
#include<stdio.h>
#include<stdlib.h>
struct Member
{
	int num;
	char name[20];
	double price;
}; 

int main()
{
	void Input(Member member[],int n);
	void Output(Member member[],int n);
	void Sort(Member member[],int n);
	int Search(Member member[],int n);	
	Member member[5];
    int n;
	Input(member,5);
	printf("\n");
	Output(member,5);
	Sort(member,5);
	n=Search(member,5);
	if(n==-1) printf("未找到此人");
	else printf("此人在数组中的下标为:%d",n);	
return 0;	
}

void Input(Member member[],int n)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("请输入第%d个员工的信息：\n",i+1);
		printf("编号：");scanf("%d",&member[i].num);fflush(stdin);
		printf("姓名：");gets(member[i].name);fflush(stdin);
		printf("工资：");scanf("%lf",&member[i].price); 
		printf("\n");		
	}
	system("pause");
	system("cls");	 	
}
void Output(Member member[],int n)
{
	int i;
	printf("请核实数据：\n");	
	for(i=0;i<5;i++)
	{
		printf("编号：%d\n",member[i].num);
		printf("姓名：");puts(member[i].name);
		printf("工资：%.2f\n",member[i].price); 
		printf("\n");
	}
	system("pause");
	system("cls");	 	
}
void Sort(Member member[],int n)
{
	int i,j;
	Member t;
	printf("据工资由大到小排序为:\n"); 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(member[j].price<member[j+1].price)
			{
				t=member[j];
				member[j]=member[j+1];
				member[j+1]=t;
			}
		}
	}
	Output(member,5);
}
int Search(Member member[],int n)
{
	int num,i,flag=1;
	printf("请输入编号以查找：");scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(member[i].num==num) {return i;break;}
		else flag=0;
	}
	if(flag==0) return -1;
}
