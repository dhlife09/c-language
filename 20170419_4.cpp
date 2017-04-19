#include <stdio.h>

int main() {
	int number;
	printf("정수를 입력해 주세요: ");
	scanf("%d", &number);
	if ( number >= 0) {
		if( number < 10 ) {
			printf("small");
		} else if ( number > 9) {
			printf("big");
		}
	}
	return 0;
}
 
