#include<stdio.h>
int main()
{
	int i,a[5]={1,3,9,5,4};
	
	printf("原数组为：1，3，9，5，4\n");
	printf("逆序输出为：") ;
	for(i=4;i>0;i--)
	{
         printf("%d，",a[i]);
         if(i==1) printf("%d",a[0]);

	}
	return 0;
}
