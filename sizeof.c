#include <stdio.h>
#include <stdlib.h>

struct key {
	int a;
};
int main(int argc, char *argv[])
{
	struct key *k;
	if(1)
		goto a;
	else
		goto b;
a:
	printf("sizeof longlongint : %d\n",sizeof(long long int));
b:
	printf("sizeof void : %d\n",sizeof(void*));
	printf("sizeof int : %d\n",sizeof(int));
	printf("sizeof unsignedchar : %d\n",sizeof(unsigned char));
}
