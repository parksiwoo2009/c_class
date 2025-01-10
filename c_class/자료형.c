#include <stdio.h>
int main(void)
{
	//10 과 10.0 은 다르다.
unsigned int max_number = 2200000000;
	printf("%u\n", max_number);

	int num1 = 1;
	printf("%d\n", sizeof(num1));
	printf("%d\n", sizeof(100));
	printf("%d\n", sizeof(3.14)); //double
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(short));
	return 0;
}