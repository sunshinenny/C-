#include<stdio.h>
#include<string.h>
int main()
{
	char t[20],name[100][20];
	int n,i,j;
	
	printf("请输入学生个数：");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("请输入第%d个学生的姓名：",i+1);
		scanf("%s",name[i]);
	} 
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(strcmp(name[i],name[i+1])>0)
			{
				strcpy(t,name[i]);
				strcpy(name[i],name[i+1]);
				strcpy(name[i+1],t);
			}
		}
	}	 


	printf("按从小到大排序结果为：\n");	
	
	for(i=0;i<n;i++)
	{
		printf("%s ",name[i]);
	}

	return 0;
}
