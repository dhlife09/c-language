#include <stdio.h>

int main() {
	int number;
	printf("정수를 입력해 주세요: ");
	scanf("%d", &number);
		if( number >= 70 && number < 80) {
			printf("행운의 정수");
		} else {
			printf("꽝");
		}
		return 0;
	}
