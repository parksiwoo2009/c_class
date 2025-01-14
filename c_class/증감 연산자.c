#include <stdio.h>
int main(void)
{
	// 감소 ( 변수 --; / -- 변수;)
	//증가 ( 변수 ++; / ++ 변수;)

	// ++변수와 변수 ++의 차이점
	// int a = b++

	int putA = 10, putB = 20;
	printf("A : %d \n", putA);
	printf("A : %d \n", ++putA);
	printf("A : %d \n", putA);
	printf("\n");
	printf("B : %d \n", putB);
	printf("B : %d \n", putB++);
	printf("B : %d \n", putB);

	return 0;
}