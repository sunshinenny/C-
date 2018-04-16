#include<stdio.h>
int main()
{
	int number,g,s,b,q,w;
	printf("输入一个最多五位的数字:");
	scanf("%d",&number); 
	if (number>=0&&number<100000)
	{
	
	if (number/10000>=1&&number/10000<10)
	{
	printf("这是一个五位数\n");
	w=number/10000;q=(number%10000)/1000;
	b=(number%1000)/100;s=(number%100)/10;
	g=number%10;
	printf("万位：%d  千位：%d  百位：%d 十位： %d 个位： %d\n",w,q,b,s,g);
	printf("逆序输出为：%d%d%d%d%d",g,s,b,q,w);
    }
		if (number/1000>=1&&number/1000<10)
		{
	    printf("这是一个四位数\n");
	    q=(number%10000)/1000;b=(number%1000)/100;
		s=(number%100)/10;g=number%10;
		printf("千位：%d  百位：%d 十位： %d 个位： %d\n",q,b,s,g);
		printf("逆序输出为：%d%d%d%d",g,s,b,q);
	    }
		    if (number/100>=1&&number/100<10)
		    {		    
	        printf("这是一个三位数\n");
	        b=(number%1000)/100;s=(number%100)/10;
	        g=number%10;
	        printf("百位：%d 十位： %d 个位： %d\n",b,s,g);
	        printf("逆序输出为：%d%d%d",g,s,b);
	        }
		        if (number/10>=1&&number/10<10)
	            {
	            printf("这是一个两位数\n");
	            s=(number%100)/10;
	            g=number%10;
	            printf("十位： %d 个位： %d\n",s,g);
	            printf("逆序输出为：%d%d",g,s);
	            }
		            if (number>=1&&number<10)
		            {
		            printf("这是一个个位数\n");
	                g=number%10;
	                printf("个位： %d\n",g);
	                printf("逆序输出为：%d",g);
	                }
    }
    else printf("输入错误");
	return 0;
}
