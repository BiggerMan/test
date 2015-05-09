#include <stdio.h>

int swap(int *a,int *b)
{
	int temp=*a;
	*a = *b;
	*b =temp;
}

int isEven(int n)
{
	return (n&1) == 0;//must have ()!!! &'s priority is lower to ==!!
}

int reOrder(int *a,int len, int (*func)(int))
{
	int *left=a;
	int *right=a+len-1;
	int i;
	for(i=0;i<6;i++)
		printf("%d ",a[i]);
	printf("\n");
	if(len<=1)
		return;
	while(left<right)
	{
		while( !func(*left) ) left++;
		while( func(*right) ) right--;
		if(left<right)
		{
			swap(left,right);
			left++;
			right--;
		}
	}
	return 0;
}

int main()
{
	int a[]={1,2,3,4,5,6};
	int i;
	for(i=0;i<6;i++)
		printf("%d ",a[i]);
	printf("\n");
	reOrder(a,6,isEven);
	for(i=0;i<6;i++)
		printf("%d ",a[i]);
	printf("\n");

	return 0;
}
