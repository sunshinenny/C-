/*2������3��ѧ����Ӣ�����֣�����С�����˳����������У��ɶ��彻������SwapStr��ʵ��2���ַ����Ľ�����*/
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
	printf("������3��ѧ����Ӣ�����֣�");
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
	printf("��С��������Ϊ��");
	for(i=0;i<3;i++)
	{
		printf("%s ",name[i]);
	}

	
return 0;
}

