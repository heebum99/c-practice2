#include "khb.h"

int main()
{
	double weight, height, BMI;

	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf("%lf%lf", &weight, &height);

	double m_height = height / 100;

	BMI = weight / (m_height * m_height);

	//BMI가 20이상 25미만이면 "표준입니다", "그렇지 않으면 체중관리가 필요합니다"를 출력
	printf("%s\n", BMI >= 20.0 && BMI < 25.0 ? "표준입니다." : "체중관리가 필요합니다.");

	return 0;
}