#include <stdio.h>
 
void hello(char* name) {

	printf("안녕하세요 %s님\n ", name);

}

int main()
{
	char k[50];
	printf("이름을 입력해주세요 :");
	scanf_s("%s", k,(unsigned)sizeof(name));
	hello(name);

	return 0;
}