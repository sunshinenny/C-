#include<stdio.h>
#include<math.h>
int main()
{
	float rate=0.0705,principal,payperyear,numberyears,payment,sub,sum;
	printf("请输入本金：");
	scanf("%f",&principal);
	printf("输入每年还款次数：");
	scanf("%f",&payperyear);
	printf("输入还款年数：");
	scanf("%f",&numberyears);
	printf("*********还款信息*********\n");
	
	payment=(rate*(principal/payperyear))/(1-pow(((rate/payperyear)+1),(-payperyear*numberyears)));
	
	sum=payment*payperyear*numberyears;
	sub=sum-principal;
	printf("每次应还额度：");
	printf("%.2f\n",payment);
	printf("还款总额：");
	printf("%.2f\n",sum);
	printf("利息总额：");
	printf("%.2f\n",sub);
	
	return 0;
}
