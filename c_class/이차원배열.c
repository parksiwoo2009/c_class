#include <stdio.h>
int main()
{
	int a[3][4];
	a[0][0] = 10;
	printf("%d \n", a[0][0]);

	int arr[3][4] = {
		{1,2,3,4},
	    {5,6,7,8},
		{9,10,11,12}
	};
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}