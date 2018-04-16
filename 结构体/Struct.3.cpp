/*3、建立一个由3个学生（包括学号、姓名、成绩）组成的静态链表，
然后，输出该链表中各结点的数据。*/
#include<stdio.h>
struct Student
{
	int num;
	char name[20];
	double score;
	Student *next;
};

int main()
{
	Student s[3]={{1001,"Sunny",90},{1002,"Tom",80},{1003,"Kitty",85}};
	Student *p,*head;
	head=s;
	s[0].next=&s[1];
	s[1].next=&s[2];
	s[2].next=NULL;
	p=head;
	while(p!=NULL)
	{
		printf("%6d %6s %6.2f",p->num,p->name,p->score);
		p=p->next;
		printf("\n");
	}
return 0;			
}
