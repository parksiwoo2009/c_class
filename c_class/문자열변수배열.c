#include <stdio.h>
int main()
{
	char string_text[] = "�ȳ��ϼ���!";
	printf("���ڿ� ���� string_text�� ���̴� : %zd \n",sizeof(string_text));

	char english_text[] = "hello!";
	printf("���� ���ڿ� english_text�� ���̴� : %zd \n", sizeof(english_text));

	char long_text[50] = "This is long";
	printf("���ڿ� ���� long_text�� ���̴� : %zd \n", sizeof(long_text));
	//printf("�迭 long_text�� �ʱ�ȭ�� ���ڿ��� ���� : %zd \n",strlen(long_text);
	printf("%s \n", long_text);

	char name[30] = "my name is  **";
	printf("%s \n", name);
	name[10] = '\0';
	printf("%s \n", name);
	printf("���ڿ� ���� name�� ���̴� : %zd \n", sizeof(name));
	
	//char scanf_string[50];
	//printf(" scanf_string ���ڿ��� �Է��ϼ��� : ");
	//scanf_s("%s", scanf_string,(unsigned int)sizeof(scanf_string));
	//printf("%s \n", scanf_string);

	char gets_string[50];
	printf("gets_s�� ���ڿ��� �Է��ϼ��� : ");
	gets_s(gets_string, sizeof(gets_string));
	printf("%s \n", gets_string);
	return 0;
}