/*4������һ������ÿ����������ѧ�š��������ɼ�������������Node��
1�������ʼ��������ԭ��ΪNode *  Init( );
2�����������㺯����ԭ��Ϊvoid  Insert( Node * );
3����������Ϣ������ԭ��Ϊvoid  Show( Node * )��
���������У��������Ϻ������һ������Ĵ����������
*/

#include<stdio.h>

struct Node
{
	int num;
	char name[20];
	double score;
	Node *next;
};

Node * Init();
void Insert(Node *head);
void Show(Node *head); 
int main()
{
	int i;
	Node *head;//����ͷָ��
	head=Init();//׼����һ���յ�����
    printf("������ѧ����Ϣ��ѧ�� ���� �ɼ���:\n"); 
	for(i=0;i<3;i++)
	Insert(head);
	
    Show(head); 
return 0;	 
}

Node *Init()
{
	//���������� 
	Node *head;
	head=new Node;
	head->next=NULL;
	printf("�����ʼ���ɹ�!\n");
	return head;
}//׼������ 

void Insert(Node *head)
{
	//�����½ڵ� eg��p
	Node *p;
	p=new Node;
	//����ѧ����Ϣ

	scanf("%d %s %lf",&p->num,&p->name,&p->score);
	//���ڵ�p���뵽head��
	p->next=head->next;
	head->next=p;
	 
}

void Show(Node *head)
{
	Node *p;
	p=head->next;
	while(p!=NULL)
	{
		printf("%d %s %.2f\n",p->num,p->name,p->score);
		p=p->next;
	}
}
