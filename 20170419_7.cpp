#include <stdio.h>

int main() {
	int score;
	printf("����� ������ �Է��� �ּ���(100�� ������ 100��) : ");
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
