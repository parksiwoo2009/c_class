#include <stdio.h>
int main()
{
    /*
	�ڷ��� ������ = �ʱⰪ;
	while(����){
	�ݺ���Ű���� �ϴ� �ڵ� �ۼ�;
	������; 
	*/

	int c_class = 1;
	while (c_class <= 10) {
		printf("c��� ���� %d \n", c_class);
		c_class++;
	}


	
	/* ���� Ǯ��
	int six = 6, ten = 1;
	while (ten <= 10) {
		printf("%d \n", six * ten);
		ten++;
	}
	*/
	//���� (if�� ����)
	int six = 1;
	while (six <= 60) {
		if (six % 6 == 0) {
			printf("%d \n ", six);
		}
		six++;
	}


	return 0;
}