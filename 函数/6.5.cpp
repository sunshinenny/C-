#include<stdio.h>
void Input(int score[][3],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("�������%d��ѧ����3�ųɼ���",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%d",&score[i][j]);
		}
	}
}

void Show(int score[][3],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("��%d��ѧ����3�ųɼ�Ϊ��",i+1);
		for(j=0;j<3;j++)
		{
			printf("%d ",score[i][j]);
		}
		printf("\n");
	}	
}

void Avgscore(int score[][3],int n)
{
	int avg,i,j,sum[5]={0};
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i]=sum[i]+score[i][j];
		}
	printf("��%d��ѧ����ƽ���ɼ�Ϊ��%.2f\n",i+1,(double)sum[i]/3);	
	}
}


int main()
{
	int score[100][3];
	Input(score,5);
	printf("\n");
	Show(score,5);
	printf("\n");
	Avgscore(score,5);
	return 0;	
}
