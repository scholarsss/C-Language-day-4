#include<stdio.h>
int count=0;
void move(int x,char a,char b,char c)
{
	if(1==x)
	{
		printf("\n%c->%c\n",a,c);
		count++;
	}
	else
	{
		move(x-1,a,c,b);
		printf("%c->%c",a,c);
		count++;
		move(x-1,b,a,c);
	}
}
int main()
{
	int n;
	printf("����������Ҫ�ƶ����ӵĸ���\n");
	scanf("%d",&n);
	move(n,'a','b','c');
	printf("�ܹ���Ҫ��%d��\n",count);
	return 0;
}
