#include<stdio.h>
int main()
{
	int i,a[5]={1,3,9,5,4};
	
	printf("ԭ����Ϊ��1��3��9��5��4\n");
	printf("�������Ϊ��") ;
	for(i=4;i>0;i--)
	{
         printf("%d��",a[i]);
         if(i==1) printf("%d",a[0]);

	}
	return 0;
}
