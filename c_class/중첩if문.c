#include <stdio.h>
int main(void)
{
	/*
	if(조건식1){
	    if(조건식2){
		   조건식 1과 2를 모두 만족할 경우 코드 실행
	    }
	}
	*/

	int scnum = 250108, scnumcheck;
	int password = 118612, passwordcheck;

	printf("학번을 입력해주세요 : ");
	scanf_s("%d", &scnumcheck);

	printf("비밀번호를 입력해주세요 : ");
	scanf_s("%d", &passwordcheck);

	if (scnum == scnumcheck) {
		if (password == passwordcheck) {
			printf("%d님이 로그인 되었습니다.", scnumcheck);
		}
		else {
			printf("비밀번호가 일치하지 않습니다.");
		}
	}
	else {
		printf("아이디가 일치하지 않습니다.");
	}
	return 0;

}