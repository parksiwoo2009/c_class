#include <stdio.h>
int main(void)
{
	/*
	if(���ǽ�1){
	    if(���ǽ�2){
		   ���ǽ� 1�� 2�� ��� ������ ��� �ڵ� ����
	    }
	}
	*/

	int scnum = 250108, scnumcheck;
	int password = 118612, passwordcheck;

	printf("�й��� �Է����ּ��� : ");
	scanf_s("%d", &scnumcheck);

	printf("��й�ȣ�� �Է����ּ��� : ");
	scanf_s("%d", &passwordcheck);

	if (scnum == scnumcheck) {
		if (password == passwordcheck) {
			printf("%d���� �α��� �Ǿ����ϴ�.", scnumcheck);
		}
		else {
			printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�.");
		}
	}
	else {
		printf("���̵� ��ġ���� �ʽ��ϴ�.");
	}
	return 0;

}