#include <stdio.h>

#define MUL(a) (a)+(a)+(a)
int mul(int a)
{
	return a+a+a;
}

int f1()
{
	printf("************MUL***********\n");
	int a=5;
	int b,c;
	b=MUL(a++);
	printf("a=%d b=%d\n",a,b);
	c=MUL(++a);
	printf("a=%d,c=%d\n",a,c);
	if(!a&&c++)
		b++;
	else
		c++;
	printf("%d %d\n",b,c);

}
int f2()
{
	printf("************mul***********\n");
	int a=5;
	int b,c;
	b=mul(a++);
	printf("a=%d b=%d\n",a,b);
	c=mul(++a);
	printf("a=%d,c=%d\n",a,c);
	if(!a&&c++)
		b++;
	else
		c++;
	printf("%d %d\n",b,c);

}

int main()
{
	f1();
	f2();
	int a=5;
	int b=(++a)+(++a)+(++a);
	printf("************main***********\n");
	printf("%d\n",b);

	return 0;
}
