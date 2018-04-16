#include<stdio.h>
int main()
{
     int i,x,a=0,b=0,c=0;


     for(i=1;i<=10;i++)
     {
               
     printf("请输入整数：");
     scanf("%d",&x);
     
     if (x>0) a=a+1;
     if (x==0) b=b+1;
     if (x<0) c=c+1;

     }

     printf("正数的个数为：%d\n",a);
     printf("0的个数为：%d\n",b);
     printf("负数的个数为：%d\n",c);

     return 0;
}
