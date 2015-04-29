#include <stdio.h>

int main()
{
	unsigned short num= 0x12345678;
	printf("%x\n",num);
	if(num == 0x1234)
		printf("BigEndian!\n");
	else
		printf("LittleEndian!\n");

	return 0;
}
