#include "khb.h"

//로또 번호 생성 프로그램
//1~45 중 6개의 서로 다른 수를 배열에 입 출력
//입력한 수가 저장된 수와 같으면 에러메시지 출력 후 다시 입력

void input_nums(int* lotto_nums); //배열에 로또 번호를 입력하는 함수
void print_nums(int* lotto_nums); //배열에 저장된 값을 출력하는 함수

int main()
{
	int lotto_nums[6]; //로또 번호를 저장할 배열

	input_nums(lotto_nums);
	print_nums(lotto_nums);

	return 0;
}

void input_nums(int* lotto_nums) 
{
	int cnt = 0; //입력 받은 수의 개수

	while(1) //cnt가 6이 될때까지 반복문을 무한 반복.
	{
		if (cnt == 6)
		{
			break;
		}

		printf("번호 입력 : ");
		scanf("%d", lotto_nums + cnt);
		cnt++; //입력을 받고 cnt 값을 증가

		for (int i = 0; i < cnt - 1; i++) { 
			//이전에 입력한 값과 중복되거나 46이상의 값을 입력한 경우 에러메시지를 출력하고 cnt값을 감소 후 다시 입력 받기 위해서 continue문 사용. 이 경우 break도 사용가능

			if (lotto_nums[i] == lotto_nums[cnt-1]) 
			{
				printf("같은 번호가 있습니다!\n");
				cnt--;
				break; //continue
			}
			else if (lotto_nums[cnt - 1] > 45)
			{
				printf("45이하의 수를 입력해주세요!\n");
				cnt--;
				continue; //break
			}

		}

	}
}

void print_nums(int* lotto_nums)
{
	printf("로또 번호 : ");
	
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", lotto_nums[i]);
	}

}