#include <stdio.h>

int main() {
	int score;
	printf("당신의 점수를 입력해 주세요(100점 만점에 100점) : ");
	scanf("%d", &score);
	switch ( score / 10 ) {
		case 10: case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		default:
			printf("F");
	}
}
