/*1、定义一个描述时间的结构体类型Time（包括时、分、秒），然后定义一个该结构体类型的变量，按24小时制输入时间信息，然后按12小时制输出（区分AM和PM）。
例如，输入的时间是22:10:30；输出：PM 10:10:30。
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
	printf("请输入时间（24小时制）：\n");
	printf("eg:   24:00:00\n");
	scanf("%d:%s:%s",&time.h,&time.m,&time.s);
	printf("转换后：\n");
	if(time.h>12) printf("PM %d:%s:%s",time.h-12,time.m,time.s);
	if(time.h<=12) printf("AM %d:%s:%s",time.h,time.m,time.s);
return 0;	
}
