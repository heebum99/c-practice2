#include "khb.h"

//��ҹ��� ��ȯ ���α׷�
//�빮�ڸ� ã�� �ҹ��ڷ� ��ȯ

int main()
{
	//�ƽ�Ű�ڵ� �ҹ��� a = 97 ~ z = 122, �빮�� A = 65 ~ Z = 90

	char str1[80]; //Ű���带 ���� �Է¹��� ���ڿ�
	char str2[80]; //�빮�ڸ� �ҹ��ڷ� �ٲ� ���ڿ�
	int s_size = sizeof(str1) / sizeof(str1[0]); //���ڿ� ����
	int cnt = 0; //�ٲ� ���ڼ� üũ

	printf("���� �Է� : ");
	gets(str1); //������ ������ ���ڿ� �� ���� �Է¹���

	for (int i = 0; i < s_size; i++) { //  for(i=0; str[i] != '\0'; i++)
		if (65 <= str1[i] && 90 >= str1[i]) { //if((str[i] >= 'A') && (str[i] <= 'Z')) �빮�� A~Z��� �ƽ�Ű ���� 32�� ���ؼ� �ҹ��ڷ� ��ȯ
			str2[i] = str1[i] + 32; //str[i] += ('a'-'A');
			cnt++;
		}
		else {
			str2[i] = str1[i];
		}
	}

	printf("�ٲ� ���� : %s\n", str2);
	printf("�ٲ� ���� �� : %d\n", cnt);


	return 0;
}