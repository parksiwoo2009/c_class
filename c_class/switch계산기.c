#include <stdio.h>
int main(void)
{
	int a, b;
	char p;
	printf("����� �� ���ڸ� �Է����ּ��� : ");
	scanf_s("%d %d", &a,&b);
	printf("����� ���ڸ� �Է����ּ���(+,-,*,/) : ");
	scanf_s(" %c", &p, 1);


	
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
			printf("0���� ���� �� �����ϴ�. \n");
		}
		break;

	default: printf("��ȿ���� �ʴ� ������");
		break;
	}

	return 0;
}