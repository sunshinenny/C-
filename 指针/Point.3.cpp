/*3、有N个学生的C语言成绩，分别定义函数实现如下功能，并在主函数中调用它们。
a)	输入学生成绩。
b)	对学生成绩进行排序
c)	按逆序输出学生成绩。
*/
#include<stdio.h>
int main()
{
	void Input(int score[],int n);void Sort(int *s,int n);void Output(int *s,int n);
	int i,n,score[50],*s=score;
	printf("请输入学生人数：");scanf("%d",&n);
	Input(score,n);
	Sort(s,n);
	Output(s,n);
return 0;	
} 

void Input(int score[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	    printf("请输入第%d个学生的c语言成绩：",i+1);
	    scanf("%d",&score[i]);
	}	
}
void Sort(int *s,int n)
{
	int i,j,t;
	printf("由小到大排序为：");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(*(s+j)>*(s+1+j))
			{
			t=*(s+1+j);*(s+1+j)=*(s+j);*(s+j)=t;	
			}
		}
	}
	for(i=0;i<n;i++) printf("%d ",*(s+i));	
	printf("\n");
}
void Output(int *s,int n)
{
	int i;
	printf("由大到小排序为：");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",*(s+i));
	}
} 
