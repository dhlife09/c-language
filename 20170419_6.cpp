#include <stdio.h>

int main() {
	int a;
	a = 10;
	switch ( a ) {
		case 1: case 2: case 3:
		printf("a에 저장된 값은 4가 아닙니다");
		break;
		case 4:
		printf("a에 저장된 값은 4입니다");
		break;
		default:
			printf("a에 저장된 값은 뭘까요?");
	}
}
