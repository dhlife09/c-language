#include <stdio.h>

int main() {
	int a;
	a = 70;
	if ( a >= 0 ) {
		if( a < 10) {
			printf("한 자리 수");
		} else {
			printf("한 자리 수가 아닙니다!");
		}
	}
	return 0;
}
