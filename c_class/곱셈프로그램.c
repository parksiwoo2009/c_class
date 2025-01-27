#include <stdio.h>

int num(int a, int b) {
	

	return a * b;
}

int main(void)
{
	int num1, num2;
	printf("첫번째 숫자를 입력해주세요 :");
	scanf_s("%d",&num1);
	printf("두번째 숫자를 입력해주세요 :");
	scanf_s("%d", &num2);

	int result = num(num1, num2);
	printf("곱하기 연산 결과 : %d X %d = %d", num1, num2, num1 * num2);
	return 0;
}