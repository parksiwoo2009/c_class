#include <stdio.h>

int num(int a, int b) {
	

	return a * b;
}

int main(void)
{
	int num1, num2;
	printf("ù��° ���ڸ� �Է����ּ��� :");
	scanf_s("%d",&num1);
	printf("�ι�° ���ڸ� �Է����ּ��� :");
	scanf_s("%d", &num2);

	int result = num(num1, num2);
	printf("���ϱ� ���� ��� : %d X %d = %d", num1, num2, num1 * num2);
	return 0;
}