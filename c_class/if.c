#include <stdio.h>
int main(void)
{
	/*
	if(���ǽ�){
	      ������ ������ ��� ������ �ڵ带 �ۼ�;
	}
	else
	 ������ ���� false��� �� ���� �����

	if���� �Ұ�ȣ(����)���� true,false�� �����µ� true�� ��쿡�� (�߰�ȣ) �ڵ带 �����Ѵ�.

	if(���ǽ�)
	     ������ �ڵ尡 �����̶�� {�߰�ȣ} ���� ����
	*/

	int ifNumber = 10;
	if (ifNumber < 500) {
		printf("%d �� 500���� �۴�? �� ���� ������ ���Դϴ�.");
	}

	if (ifNumber == 3) {
		printf("%d�� 3�� ����", ifNumber);
	}
	
		
	//����ڷκ��� �������� �Է¹޾� ���� ���� ���ǹ����� ����� 10000�� �̻��� ��
	// �Ϸ翡 *****�� �ȴٴ� ����ؿ� ���� �����Դϴ�!
	

	int walkcount;
	printf("����� �Ϸ翡 �󸶳� �ȳ���? ");
	scanf_s("%d", &walkcount);

	if (walkcount == 10000) {


		printf("%d�� �ȴٴ� ����ؿ�~~~", walkcount);
	}

	char alpha = 'A';
	if (alpha == 'B') {
		printf("alphasms B�� �����ϴ�.");
	}
	else {
		printf("alpha�� B �� �ٸ��ϴ�.");
	}

	int likenumber;
	printf("����� �����ϴ� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &likenumber);
	if (likenumber >= 10) {
		printf("����� �����ϴ� ���ڴ� 10 �̻��̱���~");
	}
	else {
		printf("����� �����ϴ� ���ڴ� 10 �̾��̱���~");

	}
	return 0;
}