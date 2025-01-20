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

	for (first_for = 1; first_for <= 3; first_for++) {//바깥 반복문
		//1~3까지 증가 (행)
		for (second_for = 1; second_for <= 2; second_for++) {
			printf("%d행 %d열 \n", first_for, second_for);
		}
		printf("\n");
	}
	return 0;
}