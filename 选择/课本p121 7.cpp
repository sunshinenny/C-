#include<stdio.h>
int main()
{
	int number,g,s,b,q,w;
	printf("����һ�������λ������:");
	scanf("%d",&number); 
	if (number>=0&&number<100000)
	{
	
	if (number/10000>=1&&number/10000<10)
	{
	printf("����һ����λ��\n");
	w=number/10000;q=(number%10000)/1000;
	b=(number%1000)/100;s=(number%100)/10;
	g=number%10;
	printf("��λ��%d  ǧλ��%d  ��λ��%d ʮλ�� %d ��λ�� %d\n",w,q,b,s,g);
	printf("�������Ϊ��%d%d%d%d%d",g,s,b,q,w);
    }
		if (number/1000>=1&&number/1000<10)
		{
	    printf("����һ����λ��\n");
	    q=(number%10000)/1000;b=(number%1000)/100;
		s=(number%100)/10;g=number%10;
		printf("ǧλ��%d  ��λ��%d ʮλ�� %d ��λ�� %d\n",q,b,s,g);
		printf("�������Ϊ��%d%d%d%d",g,s,b,q);
	    }
		    if (number/100>=1&&number/100<10)
		    {		    
	        printf("����һ����λ��\n");
	        b=(number%1000)/100;s=(number%100)/10;
	        g=number%10;
	        printf("��λ��%d ʮλ�� %d ��λ�� %d\n",b,s,g);
	        printf("�������Ϊ��%d%d%d",g,s,b);
	        }
		        if (number/10>=1&&number/10<10)
	            {
	            printf("����һ����λ��\n");
	            s=(number%100)/10;
	            g=number%10;
	            printf("ʮλ�� %d ��λ�� %d\n",s,g);
	            printf("�������Ϊ��%d%d",g,s);
	            }
		            if (number>=1&&number<10)
		            {
		            printf("����һ����λ��\n");
	                g=number%10;
	                printf("��λ�� %d\n",g);
	                printf("�������Ϊ��%d",g);
	                }
    }
    else printf("�������");
	return 0;
}
