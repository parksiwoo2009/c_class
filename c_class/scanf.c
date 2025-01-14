#include <stdio.h>
int main(void)
{
	// 1. 입력할 데이터의 대응하는 자료형
	// 2. 입력할 데이터가 저장될 메모리 공간(변수)
	// scanf -> scanf_s

	int num;
	//scanf_s("%d", &num);
	//scanf_s("%d\n", &num); //틀림 X
	//scanf_s("%d", &num); // 입력을 받은 다음
	//printf("\n"); // 줄바꿈을 출력

	//scanf_s("입력 : %d", &num); //X
	//printf("입력 : ");
	//scanf_s("%d", &num);

    int x, y, z,total;
	printf("정수 3개 입력 : ");
	scanf_s("%d %d %d", &x, &y, &z);
	total = x + y + z;
	printf("%d %d %d = %d", x, y, z, total);
	
    float fnum;
	printf("실수입력 : f ");
	scanf_s("%f", &fnum);
	 printf("입력된 값 : %0.2f", fnum);

	float scanf_pi;

	printf("원주율 입력 : ");
	scanf_s("%f", &scanf_pi);
	printf("입력된 값 : %0.2f", scanf_pi);
	


	return 0;
}