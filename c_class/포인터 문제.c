#include <stdio.h>
int main()
{
	int num = 4;
	int* ptr = &num;

	printf("%d : %p", *ptr,ptr);

	return 0;
}