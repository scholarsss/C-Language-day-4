#include<stdio.h>
#include<string.h>
int main()
{
	int arr[]={1,2,3,4,5,6};
	int sz=sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",sz);
	char add[]="123456";
	int sa=strlen(add);
	printf("%d",sa);
	return 0;
}
