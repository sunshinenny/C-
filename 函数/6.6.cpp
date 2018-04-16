#include<stdio.h>
#include<string.h>

void Sort(char name[5][20])
{
	int i,j;
	char t[20];
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(strcmp(name[j],name[j+1])>0)
			{
				strcpy(t,name[j+1]);
				strcpy(name[j+1],name[j]);
				strcpy(name[j],t); 
			}
		}
	}
} 

void Input(char name[5][20])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("请输入第%d个人的名字：",i+1);
		gets(name[i]);
		fflush(stdin);
	}
}

int main()
{
	int i;
	char name[5][20];
	Input(name);
	Sort(name);
	printf("从小到大排序为：\n");	
	for(i=0;i<5;i++)
	{
		printf("%s ",name[i]);
	}
	
	return 0;
}
