#include<stdio.h>

int main()
{
	int i,n,score[100],t;
	void Input(int score[],int n);
	void Output(int score[],int n);
	void Sort(int score[],int n);
	int Find(int score[],int n);
	
	
	printf("������ѧ��������");
	scanf("%d",&n);
	Input(score,n);
	printf("\n");
	Output(score,n);
	Sort(score,n);
	printf("�ɼ���С��������Ϊ��\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",score[i]);
	}
	printf("\n");	
	printf("������һ���ɼ����ڲ��ң�");
	t=Find(score,n);
	if(t==-1) printf("δ�ҵ��˳ɼ�");
	if(t!=-1) printf("�óɼ��ĽǱ�Ϊ��%d",t);
	
	
	return 0;

}








void Input(int score[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("�������%dλѧ���ɼ���",i+1);
		scanf("%d",&score[i]);
	}
}

void Output(int score[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("��%dλѧ���ĳɼ�Ϊ��",i+1);
		printf("%d\n",score[i]);
	}
	
}

void Sort(int score[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(score[j]>score[j+1])
			{
				t=score[j+1];
				score[j+1]=score[j];
				score[j]=t;
			}
		}
	}
}


int Find(int score[],int n)
{
	int i,Score;
	scanf("%d",&Score);
	for(i=0;i<n;i++)
	{
		if(i==n-1)
		{
			if(score[i]!=Score) return -1;
		}
	if(score[i]==Score) return i;

	}
}

