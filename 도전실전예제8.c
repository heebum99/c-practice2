#include "khb.h"

//대소문자 변환 프로그램
//대문자를 찾아 소문자로 변환

int main()
{
	//아스키코드 소문자 a = 97 ~ z = 122, 대문자 A = 65 ~ Z = 90

	char str1[80]; //키보드를 통해 입력받을 문자열
	char str2[80]; //대문자를 소문자로 바꾼 문자열
	int s_size = sizeof(str1) / sizeof(str1[0]); //문자열 길이
	int cnt = 0; //바뀐 문자수 체크

	printf("문장 입력 : ");
	gets(str1); //공백을 포함한 문자열 한 줄을 입력받음

	for (int i = 0; i < s_size; i++) { //  for(i=0; str[i] != '\0'; i++)
		if (65 <= str1[i] && 90 >= str1[i]) { //if((str[i] >= 'A') && (str[i] <= 'Z')) 대문자 A~Z라면 아스키 값에 32를 더해서 소문자로 변환
			str2[i] = str1[i] + 32; //str[i] += ('a'-'A');
			cnt++;
		}
		else {
			str2[i] = str1[i];
		}
	}

	printf("바뀐 문장 : %s\n", str2);
	printf("바뀐 문자 수 : %d\n", cnt);


	return 0;
}