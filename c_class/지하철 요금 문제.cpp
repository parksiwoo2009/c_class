#include <stdio.h>
int main(void)
{
	// ����ڰ� 20�� �̻��̸� 1280�� �̸��̶�� 800���� �޴� ���α׷� �����ϱ�
	int num1;
	printf("���̸� �Է����ּ��� : ");
	scanf_s("%d", &num1);

	int num2 = num1 >= 20 ? 1280 : 800;
	printf("%d ���� ����ö ����� %d �Դϴ� .", num1, num2);


	
	return 0;
}