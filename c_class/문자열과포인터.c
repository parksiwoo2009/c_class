#include <stdio.h>
int main()
{
	char good[] = "good"; //������ ���氡�� �ּҰ��� ���� �Ұ�
	char* bad = "bad"; //�ּҰ��� ���氡�� ������ ���� �Ұ�

	good[0] = 'H';
	//good = "new good" X
	printf("%s,%s\n", good, bad);

	//bad[0] = 's'; X
	bad = "new bad";
	printf("%s,%s\n", good, bad);

	return 0;
}