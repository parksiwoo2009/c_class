#include <stdio.h>
int main()
{
	int num1;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num1);
	while (num1 != 0) { //0�� �ƴ϶�� ��� �ݺ���
		printf("�Է��� ���ڴ� %d �Դϴ�. �ٽ� �Է��ϼ���(0�� �Է½� ����)",num1);
		scanf_s("%d", &num1);
	}
	printf("0�Է����� ���α׷��� �����մϴ�.");
	

	return 0;
}