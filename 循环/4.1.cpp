#include<stdio.h>
int main()
{
     int i,x,a=0,b=0,c=0;


     for(i=1;i<=10;i++)
     {
               
     printf("������������");
     scanf("%d",&x);
     
     if (x>0) a=a+1;
     if (x==0) b=b+1;
     if (x<0) c=c+1;

     }

     printf("�����ĸ���Ϊ��%d\n",a);
     printf("0�ĸ���Ϊ��%d\n",b);
     printf("�����ĸ���Ϊ��%d\n",c);

     return 0;
}
