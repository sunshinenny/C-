#include<stdio.h>
int main()
{
	float A,B,R,a,b,r,sum,average;
	printf("��1��ͬѧ��ĩ�ɼ���ƽʱ�ɼ���");
	scanf("%f %f",&A,&B);
	R=A*7/10+B*3/10;
	printf("��1��ͬѧ�ܳɼ�Ϊ��");	
	printf("%.2f\n",R);
	
	printf("��2��ͬѧ��ĩ�ɼ���ƽʱ�ɼ���");
	scanf("%f %f",&a,&b);
	r=a*7/10+b*3/10;
	printf("��2��ͬѧ�ܳɼ�Ϊ��");	
	printf("%.2f\n",r);
	
	printf("2λͬѧ�ܳɼ�Ϊ");
	sum=R+r;
	printf("%.2f\n",sum);
	
	printf("ƽ���ɼ�Ϊ");
	average=sum/2;
	printf("%.2f\n",average);
	return 0;
	
}
