#include <stdio.h>
int main()
{
	/*
	for() {
	    for() {
		}
	}
	*/

	int first_for, second_for;

	for (first_for = 1; first_for <= 3; first_for++) {//�ٱ� �ݺ���
		//1~3���� ���� (��)
		for (second_for = 1; second_for <= 2; second_for++) {
			printf("%d�� %d�� \n", first_for, second_for);
		}
		printf("\n");
	}
	return 0;
}