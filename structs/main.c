#include <stdio.h>

struct testStruct {
	unsigned char testVariable;
};

int main()
{
	struct testStruct myStruct;
	myStruct.testVariable = 0xAA;

	printf("myStruct.testVariable = %d\n", myStruct.testVariable);

	return 0;
}
