#include<stdio.h>
int main()
{
	int N,A,G,S,B,Result;
	printf("Input a number:");
	scanf("%d",&N);
	A=N%100;
	G=A%10;
	S=(A-G)/10;
	B=(N-A)/100;
	Result=G*100+S*10+B;
	printf("%d",Result);
	return 0;
}
