#include <stdio.h>

int main() {
	double a, b, area;
	printf("�غ��� ���̸� ���ʴ�� �Է��Ͻÿ� : ");
	scanf("%1f %1f", &a, &b);
	area = a * b / 2;
	printf("�ﰢ���� ���̴� %.21f�Դϴ�.", area);
	return 0;
}
