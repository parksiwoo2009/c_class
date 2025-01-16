#include <stdio.h>
int main(void)
{
	/*
	if(조건문) {
		조건을 만족할 경우 실행
	}
	 else if (조건2) {
		조건2를 만족할 경우 실행
		}
		 else if (조건3) {
		조건2를 만족할 경우 실행
		}
		 else if (조건4) {
		조건2를 만족할 경우 실행
		}
		else {
		  모든 조건을 만족하지 않을 경우
		  }
	*/


	int num_a;
	printf("숫자 입력 : ");
	scanf_s("%d", &num_a);
	if (num_a > 3) {
		printf("고양이 \n");
	}
	else if (num_a == 1) {
		printf("강아지 \n");
	}
	else {//4보다 작고 1보다 크다면
		printf("햄토리 \n");
    }

	int exam;
	printf("학점 입력 : ");
	scanf_s("%d", &exam);
	if (exam >= 90) {
		printf("학점 %d 는 참 잘했어요! \n", exam);
	}
	else if (exam >= 80) {
		printf("학점 %d  \n", exam);
	}
	else if (exam >= 70) {
		printf("학점 %d  \n", exam);
			
	}
	else if (exam >= 60) {
		printf("학점 %d 는 \n", exam);
	}
	else  {
		printf("재시험 \n");
	}

	int bus;
	printf("나이 입력 : ");
	scanf_s("%d", &bus);

	if (bus >= 0 && bus <= 7) {
		printf("유아는 800원 입니다. \n ", bus);
	}
	else if (bus >= 8 && bus <= 19) {
		printf("학생은 1200원 입니다. \n", bus);
	}
	else if (bus >= 20 && bus <= 34) {
		printf("청년은 1600원 입니다. \n", bus);
	}
	else if (bus >= 35 && bus <= 59) {
		printf("중년은 2000원 입니다. \n", bus);
	}
	else if (bus >= 60 && bus <= 150) {
		printf("노년은 무료 입니다. \n", bus);
	}
	else {
		printf("무언가 잘못됨을 인지 \n");
	}




	return 0;
}