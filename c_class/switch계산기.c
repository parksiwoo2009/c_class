#include <stdio.h>
int main(void)
{
	int a, b;
	char p;
	printf("계산할 문자를 입력해주세요(+,-,*,/) : ");
	scanf_s("%c", &p, 1);

	printf("계산할 두 숫자를 입력해주세요 : ");
	scanf_s("%d %d", &a,&b);

	
	switch (p) {
	case '+': printf("%d + %d = %d\n", a,b,a + b);
		break;
	case '-': printf("%d - %d = %d\n", a,b,a -b);
		break;
	case '*': printf("%d * %d = %d\n", a,b,a *b);
		break;
	case '/':
		if (b != 0) {
			printf("%d / %d = %d\n", a, b, a / b);
		}
		else {
			printf("0으로 나눌 수 없습니다. \n");
		}
		break;

	default: printf("유효하지 않는 연산임");
		break;
	}

	return 0;
}