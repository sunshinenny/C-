/*7、输入月份,输出对应的英文名称。例如,输入5,输出May。（提示，采用字符指针数组来存放月份的英文名称）*/
#include<stdio.h>
int main()
{
	void month(int n);
	int n;
	printf("请输入月份（数字）：");
	scanf("%d",&n);
	month(n);
	
return 0;	
}

void month(int n)
{
	char *p[12];
	p[0]="January";
	p[1]="February";
	p[2]="March"; 
    p[3]="April"; 
    p[4]="May"; 
    p[5]="June"; 
    p[6]="July"; 
    p[7]="August"; 
    p[8]="September"; 
    p[9]="October";
    p[10]="November"; 
    p[11]="December";
    
    puts(p[n-1]);
}
 

