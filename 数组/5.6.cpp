#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char number[100][20],name[100][20],NAME[20];
	float score[100];
	int i,n,flag=1;
	
	printf("������ѧ������");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("�������%d��ѧ������Ϣ��\n",i+1);
		printf("ѧ�ţ�");fflush(stdin);gets(number[i]);
		printf("������");gets(name[i]);
		printf("C���Գɼ���");scanf("%f",&score[i]);
			
	}
	
	system("pause");
	system("cls");
	
	printf("���������������ڲ��ң�");
	fflush(stdin);
	gets(NAME);
	
	for(i=0;i<n;i++)
	{
		if(strcmp(name[i],NAME)==0)
		{
			flag=0;
			printf("ѧ�ţ�%s\n������%s\nC���Գɼ���%.2f\n",number[i],name[i],score[i]);

		}
	}
	
	if(flag==1) printf("�����޴���");
	
	return 0;
} 
