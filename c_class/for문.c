#include <stdio.h>
int main()
{
	/*
	for(�ʱⰪ; ���ǽ�; ������) {
	���ǽ��� ���̶�� �����ų �ڵ�;
	}
	*/

	int i;
	for (i = 1; i <= 10; i++) {
		printf("for�� �ݺ� %d ��° \n", i);
	}

	int i1;
	for (i1 = 10; i1 >= 1; i1--) {
		printf("for�� �ݺ� %d ��° \n", i1);
	}

	int i2;
	for (i2 = 1; i2 <= 10; i2++) {
		printf("%d�� ������ %d \n", i2, i2 * i2);
	}
	return 0;
}