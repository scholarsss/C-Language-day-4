#include<stdio.h>
void every(int x)
{
	if(x>9)
	{
		every(x/10);
	}
		printf("%d ",x%10);
}
int main()
{
	unsigned int a=0;
	printf("������һ���޷�����������\n");
	scanf("%d",&a);
	every(a);
	return 0;
}
