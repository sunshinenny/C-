/*2������һ���洢5��Ա����Ϣ��������ţ����������ʣ��Ľṹ�����顣
1����������Ա����Ϣ�ĺ���Input��
2���������Ա����Ϣ�ĺ���Output��
3�������Ա�����ʽ�������ĺ���Sort
3�����尴��Ž��в��ҵĺ���Search�����ҵ����򷵻ظ�Ա���������е��±ꣻ���û�ҵ����򷵻�-1��
��main�����е������Ϻ���ʵ����Ӧ�Ĺ��ܡ�
*/
#include<stdio.h>
#include<stdlib.h>
struct Member
{
	int num;
	char name[20];
	double price;
}; 

int main()
{
	void Input(Member member[],int n);
	void Output(Member member[],int n);
	void Sort(Member member[],int n);
	int Search(Member member[],int n);	
	Member member[5];
    int n;
	Input(member,5);
	printf("\n");
	Output(member,5);
	Sort(member,5);
	n=Search(member,5);
	if(n==-1) printf("δ�ҵ�����");
	else printf("�����������е��±�Ϊ:%d",n);	
return 0;	
}

void Input(Member member[],int n)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("�������%d��Ա������Ϣ��\n",i+1);
		printf("��ţ�");scanf("%d",&member[i].num);fflush(stdin);
		printf("������");gets(member[i].name);fflush(stdin);
		printf("���ʣ�");scanf("%lf",&member[i].price); 
		printf("\n");		
	}
	system("pause");
	system("cls");	 	
}
void Output(Member member[],int n)
{
	int i;
	printf("���ʵ���ݣ�\n");	
	for(i=0;i<5;i++)
	{
		printf("��ţ�%d\n",member[i].num);
		printf("������");puts(member[i].name);
		printf("���ʣ�%.2f\n",member[i].price); 
		printf("\n");
	}
	system("pause");
	system("cls");	 	
}
void Sort(Member member[],int n)
{
	int i,j;
	Member t;
	printf("�ݹ����ɴ�С����Ϊ:\n"); 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(member[j].price<member[j+1].price)
			{
				t=member[j];
				member[j]=member[j+1];
				member[j+1]=t;
			}
		}
	}
	Output(member,5);
}
int Search(Member member[],int n)
{
	int num,i,flag=1;
	printf("���������Բ��ң�");scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(member[i].num==num) {return i;break;}
		else flag=0;
	}
	if(flag==0) return -1;
}
