/*2、输入3个学生的英文名字，按由小到大的顺序输出。其中，可定义交换函数SwapStr来实现2个字符串的交换。*/
#include<stdio.h>
#include<string.h>

void SwapStr(char *p1,char *p2)
{
	char t[20];
	strcpy(t,p1);
	strcpy(p1,p2);
	strcpy(p2,t);
}
int main()
{
	
	int i,j;
	char name[3][20];
	printf("请输入3名学生的英文名字：");
	for(i=0;i<3;i++)
	{
	scanf("%s",&name[i]);
    }
	for(i=0;i<2;i++)
	{
		for(j=0;j<2-i;j++)
		{
			if(strcmp(name[j],name[j+1])>0)
			{
				SwapStr(name[j],name[j+1]);
			}
		}
	}
	printf("由小到大排序为：");
	for(i=0;i<3;i++)
	{
		printf("%s ",name[i]);
	}

	
return 0;
}

