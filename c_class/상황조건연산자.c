#include <stdio.h>
int main(void)
{
	//���ǽ� ? ������ �̰� ��µ�(true) : Ʋ���� �̰� ��µ�(false)
	int ten = 10, twenty = 20;
	int result;
	result = ten > twenty ? ten : twenty;
	printf("�� ū ���� : %d",twenty);

	//���� 1 : ����ڿ��� ���ڸ� �Է¹޾Ƽ� �� ���ڰ� ¦����� 0�� ����ϰ� Ȧ����� 1�� ���
	//��� �޽��� : ����� �Է��� ���ڴ� * �̸� ��� : *

	int number1;
	int result2;
	printf("���� �Է� : ");
	scanf_s("%d", &number1);
	result2 = number1 % 2 == 0 ? 0 : 1;
	printf("����� �����ϴ� ���ڴ� %d�̸�,��� : ",number1, result2);
	return 0;
}