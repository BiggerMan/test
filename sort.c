#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b)
{
	const int *x=(int*)(a);
	const int *y=(int*)(b);
	return *x - *y;
}
int main()
{
	int a[]={1,3,7,5};
	int i;
	qsort(a, sizeof(a)/sizeof(a[0]) ,sizeof a[0], cmp);
	for(i=0;i<4;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
