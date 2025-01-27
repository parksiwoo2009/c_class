#include <stdio.h>

int swap(int* d, int* c)
{
	int E; // 임시공간
	E = *d; // x로 받아온 인자값을 E에 담음
	*d = *c;
	*c = E;

}



int main()
{
	int a = 3, b = 5;
	swap(&a,&b);
	printf("%d %d", a, b);
	return 0;

	/*
	call-by-value : 복사하는 원리 (값 전달을 위함)
	call-by-reference : 주소를 전달하는 원리

	*/
}