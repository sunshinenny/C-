/*6������һ���洢5��ѧ����Ϣ������ѧ�š�������3�ſγɼ����Ľṹ�����飬
��main�����ж�������г�ʼ����Ȼ�����ƽ���ɼ���͵�ѧ����Ϣ���ο�P262����9.7����*/
#include<stdio.h>
struct Student
{
	int num;
	char name[20];
	double score1;
	double score2;
	double score3;
};

int main()
{
	Student s[5]={{1001,"Tom",44,66,88},{1002,"Kitty",97,15,79},{1003,"Timi",76,31,99},{1004,"Phil",52,61,91},{1005,"Sunny",100,100,100}};
	int i;
	printf("ԭ����Ϊ��\n");
	printf("%s%10s%10s%10s%10s\n","ѧ��","����","�ɼ�1","�ɼ�2","�ɼ�3");
	for(i=0;i<5;i++)
	{
		printf("%d%10s%10.2f%10.2f%10.2f\n",s[i].num,s[i].name,s[i].score1,s[i].score2,s[i].score3);
	}
	int ave[5],min,n=0;
	for(i=0;i<5;i++)
	{
		ave[i]=(s[i].score1+s[i].score2+s[i].score3)/3;
		if(i==0) min=ave[0];
		if(ave[i]<min) {min=ave[i];n=i;}

	}
	printf("ƽ���ɼ���͵�ѧ����ϢΪ��\n");
	printf("%s%10s%10s%10s%10s\n","ѧ��","����","�ɼ�1","�ɼ�2","�ɼ�3");
	printf("%d%10s%10.2f%10.2f%10.2f\n",s[n].num,s[n].name,s[n].score1,s[n].score2,s[n].score3);	
return 0;
	
}
