#include <stdio.h>
int main(void)
{
	int num1, num2;
	printf("구매한 가격을 입력해주세요 : ");
	scanf_s("%d", &num1);

	printf("회원이라면 1 아니라면 0을 입력해주세요 :");
	scanf_s("%d", &num2);

	if (num1 >= 100000) {
		printf(" 100000원 이상 구매로 사은품이 증정됩니다.");
		if (num2 == 1) {
			printf("50000원 이상 구매로 배송비도 무료 입니다.");
		}
		else {
			printf("비회원은 배송비 5000원 입니다.");
		}
	}
	else if (num1 >= 50000) {
		if (num2 == 1) {
			printf("50000 원 이상 구매 회원은 배송비도 무료입니다.");
		}
		else
		{
			printf(" 비회원은 배송비 5000원 입니다.");
		}
	}
	else {
		printf(" 구매금액이 50000원 미만입니다. 배송비 5000원 입니다.")
	}
	return 0;
}