#include "khb.h"

int main()
{
	//char�迭 �ʱ�ȭ ���� ���ڿ��� �����Ϸ��� strcpy()�Լ� ���.
	char fruit[20] = "strawberry";

	printf("%s\n", fruit);
	strcpy(fruit, "banana"); //strcpy(�ּ�,"���ڿ�");
	printf("%s\n", fruit);

	return 0;
}