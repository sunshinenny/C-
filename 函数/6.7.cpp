#include<stdio.h>
int Prim(int n)
{
int i,j;
	
for(i=2;i<n;i++)
{
if(n%i==0)
break;	
}


if(i==n) return 1;
else return 0;	 

}

int main()
{
	int i,num,t1,t2;
	printf("请输入任意一个充分大的偶数（大于等于6）：");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		t1=Prim(i);t2=Prim(num-i);
		if(t1==1&&t2==1) printf("%d=%d+%d\n",num,i,num-i);
	}

	return 0;
}
