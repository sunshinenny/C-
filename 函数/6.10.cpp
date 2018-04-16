/*10、利用递归函数，对一个给定的整数，输出其二进制形式。*/

#include<stdio.h>
#include<math.h>
void fun(int n, int r)
{
 if (n==0) return;
 else fun(n/2,r);
 printf("%d",n%2);
}
int main()
{
 int n,r=2;
 scanf("%d",&n);
 fun(n,r);
 printf("\n");
 return 0;
}
/*int main()
{
	
	
		
}

int two(int num)
{
	int i,j,sum=0,t[20]={0},num1;
	for(i=0;sum==num;i++)
	{
		for(j=0;sum==num;j++)
		{
			if(j%2==0) num1=
			sum=sum+pow(2,t[]);
		}
	}
}*/
