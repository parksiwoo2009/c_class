#include <stdio.h>
int main()
{
    /*
	자료형 변수명 = 초기값;
	while(조건){
	반복시키고자 하는 코드 작성;
	증감식; 
	*/

	int c_class = 1;
	while (c_class <= 10) {
		printf("c언어 수업 %d \n", c_class);
		c_class++;
	}


	
	/* 나의 풀이
	int six = 6, ten = 1;
	while (ten <= 10) {
		printf("%d \n", six * ten);
		ten++;
	}
	*/
	//정답 (if문 포함)
	int six = 1;
	while (six <= 60) {
		if (six % 6 == 0) {
			printf("%d \n ", six);
		}
		six++;
	}


	return 0;
}