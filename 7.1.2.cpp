#include<stdio.h>
int we_size(char*pa)
{
	if(*pa!='\0')
	{
		return 1+we_size(pa+1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr[]="zty";
	printf("该数组的字符大小为:%d\n",we_size(arr));
	return 0;
}
