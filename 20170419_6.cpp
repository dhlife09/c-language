#include <stdio.h>

int main() {
	int a;
	a = 10;
	switch ( a ) {
		case 1: case 2: case 3:
		printf("a�� ����� ���� 4�� �ƴմϴ�");
		break;
		case 4:
		printf("a�� ����� ���� 4�Դϴ�");
		break;
		default:
			printf("a�� ����� ���� �����?");
	}
}
