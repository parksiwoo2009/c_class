#include <stdio.h>
int main()
{
	//1.배열 2.포인터변수 3.홀수값의 총 합을 넣을 변수 4.for문을 사용해서 배열에 접슨 5. if문을 사용해서 홀수를 가림
	int arr[8] = { 1,2,3,4,5,6,7,8 }; //배열 선언 및 초기화
	int* ptr = &arr[7]; //마지막 요소의 주소를 가리키는 포인터 변수
	int num = 0; //홀수의 합을 저장할 변수

	for (int i = 0;  i < 8; i++) {
		if (*ptr % 2 != 0) {//홀수라면
			num += *ptr;
	    }
		ptr--;
	}
	printf("홀수의 합 : %d \n", num);
	return 0;
}