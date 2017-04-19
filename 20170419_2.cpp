#include <stdio.h>

int main() {
	int number;
	printf("이 계산기는 최대 네 자리 수 까지만 표현됩니다\n\n");
	printf("확인하려는 정수를 입력해 주세요: ");
	scanf("%d", &number);
	printf("결과 계산 중 입니다.. 잠시만 기다려 주세요!\n\n\n\n\n\n");
	if ( number >= 0) {
		if( number < 10 ) {
			printf("입력하신 정수는 한 자리 수 입니다!");
		} else if (number < 100 ) {
			printf("입력하신 정수는 두 자리 수 입니다!");
		} else if ( number < 1000 ) {
			printf("입력하신 정수는 세 자리 수 입니다!");
		} else if ( number < 10000 ) {
			printf("입력하신 정수는 네 자리 수 입니다!");
		}
	}
	return 0;
} 
