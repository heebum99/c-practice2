#include "khb.h"

//�ζ� ��ȣ ���� ���α׷�
//1~45 �� 6���� ���� �ٸ� ���� �迭�� �� ���
//�Է��� ���� ����� ���� ������ �����޽��� ��� �� �ٽ� �Է�

void input_nums(int* lotto_nums); //�迭�� �ζ� ��ȣ�� �Է��ϴ� �Լ�
void print_nums(int* lotto_nums); //�迭�� ����� ���� ����ϴ� �Լ�

int main()
{
	int lotto_nums[6]; //�ζ� ��ȣ�� ������ �迭

	input_nums(lotto_nums);
	print_nums(lotto_nums);

	return 0;
}

void input_nums(int* lotto_nums) 
{
	int cnt = 0; //�Է� ���� ���� ����

	while(1) //cnt�� 6�� �ɶ����� �ݺ����� ���� �ݺ�.
	{
		if (cnt == 6)
		{
			break;
		}

		printf("��ȣ �Է� : ");
		scanf("%d", lotto_nums + cnt);
		cnt++; //�Է��� �ް� cnt ���� ����

		for (int i = 0; i < cnt - 1; i++) { 
			//������ �Է��� ���� �ߺ��ǰų� 46�̻��� ���� �Է��� ��� �����޽����� ����ϰ� cnt���� ���� �� �ٽ� �Է� �ޱ� ���ؼ� continue�� ���. �� ��� break�� ��밡��

			if (lotto_nums[i] == lotto_nums[cnt-1]) 
			{
				printf("���� ��ȣ�� �ֽ��ϴ�!\n");
				cnt--;
				break; //continue
			}
			else if (lotto_nums[cnt - 1] > 45)
			{
				printf("45������ ���� �Է����ּ���!\n");
				cnt--;
				continue; //break
			}

		}

	}
}

void print_nums(int* lotto_nums)
{
	printf("�ζ� ��ȣ : ");
	
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", lotto_nums[i]);
	}

}