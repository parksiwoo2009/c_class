#include <stdio.h>
int main(void)
{
	/*
	int 변수명 = 초기화;
	switch(변수명) {
	case  값 1 : 코드 1;
	break;
	case  값 2 : 코드 2;
	break;
	case  값 3 : 코드 3;
	break;
	case  값 4 : 코드 4;
	break;
	defult: 코드;
	break;
	}
	*/
	int day;
	printf("요일을 선택하세요(1~7중 택1) : ");
	scanf_s("%d", &day);

	switch (day) {
	case 1: printf("월요일 입니다.\n");
		break;
	case 2: printf("화요일 입니다.\n");
		break;
	case 3: printf("수요일 입니다.\n");
		break;
	case 4: printf("목요일 입니다.\n");
		break;
	case 5: printf("금요일 입니다.\n");
		break;
	case 6: printf("토요일 입니다.\n");
		break;
	case 7: printf("일요일 입니다.\n");
		break;

	default: printf("유효하지 않은 입력입니다. (1과7중에 택해주세요)");
	}
	return 0;
}