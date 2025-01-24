#include <stdio.h>

int num() {
	printf("num1*num2");

}
int main()
{
	int num1, num2;
	printf("계산할 숫자 2가지를 입력해주세요 :");
	scanf_s("%d %d",&num1,&num2 );
	printf("%d * %d = %d", num1, num2, num1 * num2);
	return 0;
}