/*9��дһ��������ʹ������4*4�Ķ�ά����ת�ã������л�����*/

#include<stdio.h>

int main()
{
	void ZHUAN(int num[4][4]);

	int i,j,num[4][4];

	ZHUAN(num);
	
	return 0;
}

void ZHUAN(int num[4][4])
{
	int i,j;
	printf("������һ���Ľ�����ʽ��\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	
	printf("\n");
	
	for(j=0;j<4;j++)
	{
		for(i=0;i<4;i++)
		{
			printf("%d ",num[i][j]);
			if(i==3) printf("\n");
		}
	} 
}
