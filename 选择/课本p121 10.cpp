#include<stdio.h>
#include<math.h>
int main()
{
	double a,x,b,c;
	printf("ax*x+bx+c=0\n");
	printf("����a,b,c��");
	scanf("%lf %lf %lf",&a,&b,&c);
	if ((a<0&&a>=0)||(b<0&&b>=0)||(c<0&&c>=0))
	{
	if (a==0)
	printf("����һ�κ���\n");
	if (b*b-4*a*c==0)
	printf("��������ȵ�ʵ��\n");
	if ((b*b-4*a*c)>0)
	printf("����������ȵ�ʵ��\n");
	if ((b*b-4*a*c)<0)
	printf("�����������\n");	
    }
    else printf("�������");
	return 0;
}
