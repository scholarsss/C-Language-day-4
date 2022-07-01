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
	printf("请输入您所要移动盘子的个数\n");
	scanf("%d",&n);
	move(n,'a','b','c');
	printf("总共需要走%d步\n",count);
	return 0;
}
