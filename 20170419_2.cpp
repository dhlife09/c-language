#include <stdio.h>

int main() {
	int number;
	printf("�� ����� �ִ� �� �ڸ� �� ������ ǥ���˴ϴ�\n\n");
	printf("Ȯ���Ϸ��� ������ �Է��� �ּ���: ");
	scanf("%d", &number);
	printf("��� ��� �� �Դϴ�.. ��ø� ��ٷ� �ּ���!\n\n\n\n\n\n");
	if ( number >= 0) {
		if( number < 10 ) {
			printf("�Է��Ͻ� ������ �� �ڸ� �� �Դϴ�!");
		} else if (number < 100 ) {
			printf("�Է��Ͻ� ������ �� �ڸ� �� �Դϴ�!");
		} else if ( number < 1000 ) {
			printf("�Է��Ͻ� ������ �� �ڸ� �� �Դϴ�!");
		} else if ( number < 10000 ) {
			printf("�Է��Ͻ� ������ �� �ڸ� �� �Դϴ�!");
		}
	}
	return 0;
} 
