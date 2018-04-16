#include<stdio.h>
int main()
{
    float i,k,a=0,b=1;
    
    for(i=1;i<=9;i++)
    {

       for(k=1;k<=i;k++)
       {
       	if (k==1) b=1;
        b=-b*k;
        
       }


     a=a+1/b;

    }

    
    printf("f=%.2f",-a);   //为什么输出的时候是负数  以修改完毕 

     return 0;
}
