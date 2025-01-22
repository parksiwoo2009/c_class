#include <stdio.h>
int main()
{
	int x = 10, y = 20;
	int* const PTR = &x;

	*PTR = 30;
	printf("%d \n", *PTR);

PTR = &y
	return 0;
}