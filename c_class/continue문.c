#include <stdio.h>
int main()
{
	/*
	for(�ʱ�;����;����;){
     continue;
	 ������ �ڵ�
	 }

	 while(����) {
	 ������;
	 continue;
	 ������ �ڵ�;
	 }
	*/

	int for_continue;
	for (for_continue = 1; for_continue <= 10; for_continue++) {
		if (for_continue % 2 == 0) {// ¦�����
			continue;
		}
		printf("%d \n", for_continue);
	}

	int while1 = 1;
	while (while1 <= 10) {
		while1++;
		if (while1 % 2 != 0) { //Ȧ�����
			continue;
		}		
		printf("%d \n", while1);
	}
	return 0;
}