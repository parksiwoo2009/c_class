#include <stdio.h>
int main(void)
{
	/*
	if(���ǹ�) {
		������ ������ ��� ����
	}
	 else if (����2) {
		����2�� ������ ��� ����
		}
		 else if (����3) {
		����2�� ������ ��� ����
		}
		 else if (����4) {
		����2�� ������ ��� ����
		}
		else {
		  ��� ������ �������� ���� ���
		  }
	*/


	int num_a;
	printf("���� �Է� : ");
	scanf_s("%d", &num_a);
	if (num_a > 3) {
		printf("����� \n");
	}
	else if (num_a == 1) {
		printf("������ \n");
	}
	else {//4���� �۰� 1���� ũ�ٸ�
		printf("���丮 \n");
    }

	int exam;
	printf("���� �Է� : ");
	scanf_s("%d", &exam);
	if (exam >= 90) {
		printf("���� %d �� �� ���߾��! \n", exam);
	}
	else if (exam >= 80) {
		printf("���� %d  \n", exam);
	}
	else if (exam >= 70) {
		printf("���� %d  \n", exam);
			
	}
	else if (exam >= 60) {
		printf("���� %d �� \n", exam);
	}
	else  {
		printf("����� \n");
	}

	int bus;
	printf("���� �Է� : ");
	scanf_s("%d", &bus);

	if (bus >= 0 && bus <= 7) {
		printf("���ƴ� 800�� �Դϴ�. \n ", bus);
	}
	else if (bus >= 8 && bus <= 19) {
		printf("�л��� 1200�� �Դϴ�. \n", bus);
	}
	else if (bus >= 20 && bus <= 34) {
		printf("û���� 1600�� �Դϴ�. \n", bus);
	}
	else if (bus >= 35 && bus <= 59) {
		printf("�߳��� 2000�� �Դϴ�. \n", bus);
	}
	else if (bus >= 60 && bus <= 150) {
		printf("����� ���� �Դϴ�. \n", bus);
	}
	else {
		printf("���� �߸����� ���� \n");
	}




	return 0;
}