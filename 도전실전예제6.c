#include "khb.h"

int main() 
{
	//�Ҽ� ��� ���α׷�
	//5�� ��½� ���� �ٹٲ�
	int num;
	int cnt = 0; //�ٹٲ��� ���� ī��Ʈ
	int pn; //�Ҽ����� �ƴ����� ���� ����, 1�̸� �Ҽ� 0�̸� �Ҽ��� �ƴ� ��.

	printf("2 �̻��� ������ �Է��ϼ��� : ");
	scanf("%d", &num);
	
	for (int i = 2; i <= num; i++){

		pn = 1; //�Ҽ���� ����.

		for (int j = 2; j < i; j++) {

			if (i % j == 0) { //������ �������� �Ҽ��� �ƴϹǷ� �ݺ��� Ż��.
				pn = 0;
				break;
			}

		}

		if (pn == 1) {
			printf("%d\t", i);
			cnt++;
			if (cnt % 5 == 0) {
				printf("\n");
			}
		}
	}

	return 0;
}