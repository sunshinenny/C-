/*3����N��ѧ����C���Գɼ����ֱ��庯��ʵ�����¹��ܣ������������е������ǡ�
a)	����ѧ���ɼ���
b)	��ѧ���ɼ���������
c)	���������ѧ���ɼ���
*/
#include<stdio.h>
int main()
{
	void Input(int score[],int n);void Sort(int *s,int n);void Output(int *s,int n);
	int i,n,score[50],*s=score;
	printf("������ѧ��������");scanf("%d",&n);
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
	    printf("�������%d��ѧ����c���Գɼ���",i+1);
	    scanf("%d",&score[i]);
	}	
}
void Sort(int *s,int n)
{
	int i,j,t;
	printf("��С��������Ϊ��");
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
	printf("�ɴ�С����Ϊ��");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",*(s+i));
	}
} 
