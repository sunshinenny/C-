#include<stdio.h>
int main()
{
	int i,a[10],max,min,sum=0;
	
	printf("������10��������");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
		if(i==0) max=a[0];
	    else if(a[i]>max) max=a[i];
		
		if(i==0) min=a[0];
	    else if(a[i]<min) min=a[i];
	    	    
	}
	
	printf("���ֵ��%d\n��Сֵ��%d\nƽ��ֵ��%d\n",max,min,sum/10);
	
	
	return 0;
}
