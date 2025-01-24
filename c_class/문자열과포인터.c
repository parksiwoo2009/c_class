#include <stdio.h>
int main()
{
	char good[] = "good"; //내용은 변경가능 주소값은 변경 불가
	char* bad = "bad"; //주소값은 변경가능 내용은 변경 불가

	good[0] = 'H';
	//good = "new good" X
	printf("%s,%s\n", good, bad);

	//bad[0] = 's'; X
	bad = "new bad";
	printf("%s,%s\n", good, bad);

	return 0;
}