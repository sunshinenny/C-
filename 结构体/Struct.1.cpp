/*1������һ������ʱ��Ľṹ������Time������ʱ���֡��룩��Ȼ����һ���ýṹ�����͵ı�������24Сʱ������ʱ����Ϣ��Ȼ��12Сʱ�����������AM��PM����
���磬�����ʱ����22:10:30�������PM 10:10:30��
*/
#include<stdio.h>
struct Time
{
	int h;
	char m[2];
	char s[2]; 
}; 

int main()
{
	Time time;
	printf("������ʱ�䣨24Сʱ�ƣ���\n");
	printf("eg:   24:00:00\n");
	scanf("%d:%s:%s",&time.h,&time.m,&time.s);
	printf("ת����\n");
	if(time.h>12) printf("PM %d:%s:%s",time.h-12,time.m,time.s);
	if(time.h<=12) printf("AM %d:%s:%s",time.h,time.m,time.s);
return 0;	
}
