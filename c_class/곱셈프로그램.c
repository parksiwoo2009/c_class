#include <stdio.h>

int num() {
	printf("num1*num2");

}
int main()
{
	int num1, num2;
	printf("����� ���� 2������ �Է����ּ��� :");
	scanf_s("%d %d",&num1,&num2 );
	printf("%d * %d = %d", num1, num2, num1 * num2);
	return 0;
}