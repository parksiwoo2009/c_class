#include <stdio.h>
int main()
{
	int num1;
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num1);
	while (num1 != 0) { //0이 아니라면 계속 반복함
		printf("입력한 숫자는 %d 입니다. 다시 입력하세요(0을 입력시 종료)",num1);
		scanf_s("%d", &num1);
	}
	printf("0입력으로 프로그램을 종료합니다.");
	

	return 0;
}