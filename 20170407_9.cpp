#include <stdio.h>

int main() {
	double a, b, area;
	printf("밑변과 높이를 차례대로 입력하시오 : ");
	scanf("%1f %1f", &a, &b);
	area = a * b / 2;
	printf("삼각형의 넓이는 %.21f입니다.", area);
	return 0;
}
