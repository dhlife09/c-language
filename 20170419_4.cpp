#include <stdio.h>

int main() {
	int number;
	printf("������ �Է��� �ּ���: ");
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
 
