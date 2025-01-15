#include <stdio.h>
int main(void)
{
	int total = 86 + 75 + 88 + 60 + 96;
	float avg = total / 5.0f;
	printf("짱구의 평균은 : %0.1f점 입니다.\n", avg);


   float total2 = 64 + 56 + 87.5f + 76.8f + 96.9f;
	float bing = total2 / 5.0f;
	printf("철수의 평균은 : %0.2f점 입니다.\n ", bing);


	return 0;
}