#include<stdio.h>
#include<stdlib.h>
int main()
{
	char all;
	int d=0,x=0,s=0,k=0,o=0;
	
	printf("������:");
	//scanf("%c",&all);
	
    while((all=getchar())!='\n')
    {
		if (all>='A'&&all<='Z') d++;
		else if (all>='a'&&all<='z') x++;
		else if (all==32) k++;
		else if (all>='0'&&all<='9') s++;
		else
		o++;
	}

	printf("��д��ĸ������%d\nСд��ĸ������%d\n�ո������%d\n���ָ�����%d\n�����ַ�������%d\n",d,x,k,s,o);
	
	system("pause");
	return 0;
}
