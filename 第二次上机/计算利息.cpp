#include<stdio.h>
#include<math.h>
int main()
{
	float rate=0.0705,principal,payperyear,numberyears,payment,sub,sum;
	printf("�����뱾��");
	scanf("%f",&principal);
	printf("����ÿ�껹�������");
	scanf("%f",&payperyear);
	printf("���뻹��������");
	scanf("%f",&numberyears);
	printf("*********������Ϣ*********\n");
	
	payment=(rate*(principal/payperyear))/(1-pow(((rate/payperyear)+1),(-payperyear*numberyears)));
	
	sum=payment*payperyear*numberyears;
	sub=sum-principal;
	printf("ÿ��Ӧ����ȣ�");
	printf("%.2f\n",payment);
	printf("�����ܶ");
	printf("%.2f\n",sum);
	printf("��Ϣ�ܶ");
	printf("%.2f\n",sub);
	
	return 0;
}
