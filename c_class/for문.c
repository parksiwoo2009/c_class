#include <stdio.h>
int main()
{
	/*
	for(초기값; 조건식; 증감식) {
	조건식이 참이라면 실행시킬 코드;
	}
	*/

	int i;
	for (i = 1; i <= 10; i++) {
		printf("for문 반복 %d 번째 \n", i);
	}

	int i1;
	for (i1 = 10; i1 >= 1; i1--) {
		printf("for문 반복 %d 번째 \n", i1);
	}

	int i2;
	for (i2 = 1; i2 <= 10; i2++) {
		printf("%d의 제곱은 %d \n", i2, i2 * i2);
	}
	return 0;
}