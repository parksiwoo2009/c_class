#include <stdio.h>

int swap(int* d, int* c)
{
	int E; // �ӽð���
	E = *d; // x�� �޾ƿ� ���ڰ��� E�� ����
	*d = *c;
	*c = E;

}



int main()
{
	int a = 3, b = 5;
	swap(&a,&b);
	printf("%d %d", a, b);
	return 0;

	/*
	call-by-value : �����ϴ� ���� (�� ������ ����)
	call-by-reference : �ּҸ� �����ϴ� ����

	*/
}