#include<stdio.h>
#include<string.h>
int main()
{
	char t[20],name[100][20];
	int n,i,j;
	
	printf("������ѧ��������");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("�������%d��ѧ����������",i+1);
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


	printf("����С����������Ϊ��\n");	
	
	for(i=0;i<n;i++)
	{
		printf("%s ",name[i]);
	}

	return 0;
}
