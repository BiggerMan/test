#include <stdio.h>
#include <stdlib.h>

struct key
{
 char c;
 char c2;
 int a[5];
 char *ch;
 long l;
};
//结构体成员相对于结构体的偏移量是最大简单类型（char short int double long）的整数倍 
//if have both char and long,use long as the block 
int main()
{
    struct key k;
    printf("size of int:%d\n",sizeof(int));
    printf("size of char:%d\n",sizeof(char));
    printf("size of pointer:%d\n",sizeof(void*));
    printf("size of array:%d\n",sizeof k.a);
	printf("size of struct:%d\n",sizeof(struct key));
	
	system("pause");
	return 0;
}
