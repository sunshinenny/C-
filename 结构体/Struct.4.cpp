/*4、建立一个链表，每个结点包括：学号、姓名、成绩，定义结点类型Node。
1）链表初始化函数，原型为Node *  Init( );
2）插入链表结点函数，原型为void  Insert( Node * );
3）输出结点信息函数，原型为void  Show( Node * )。
在主函数中，调用以上函数完成一个链表的创建和输出。
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
	Node *head;//创建头指针
	head=Init();//准备出一个空的链表
    printf("请输入学生信息（学号 姓名 成绩）:\n"); 
	for(i=0;i<3;i++)
	Insert(head);
	
    Show(head); 
return 0;	 
}

Node *Init()
{
	//创建新链表 
	Node *head;
	head=new Node;
	head->next=NULL;
	printf("链表初始化成功!\n");
	return head;
}//准备链表 

void Insert(Node *head)
{
	//分配新节点 eg：p
	Node *p;
	p=new Node;
	//输入学生信息

	scanf("%d %s %lf",&p->num,&p->name,&p->score);
	//将节点p插入到head中
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
