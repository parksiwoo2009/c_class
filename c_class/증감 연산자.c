#include <stdio.h>
int main(void)
{
	// ���� ( ���� --; / -- ����;)
	//���� ( ���� ++; / ++ ����;)

	// ++������ ���� ++�� ������
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