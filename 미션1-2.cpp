#include <stdio.h>

int main() {
	int a, b, c, d, e, f;
	printf("ù ��° ������ �Է��ϼ���: ");
	scanf("%d", &a);
	printf("�� ��° ������ �Է��ϼ���: ");
	scanf("%d", &b);
	c = a + b;
	d = a - b;
	e = a * b;
	if (b==0) {
		printf(" %d + %d = %d\n", a, b, c);
		printf(" %d - %d = %d\n", a, b, d);
		printf(" %d * %d = %d\n", a, b, e);
	} else {
		f = a / b;
		printf(" %d + %d = %d\n", a, b, c); 
		printf(" %d - %d = %d\n", a, b, d);
		printf(" %d * %d = %d\n", a, b, e);
		printf(" %d / %d = %d\n", a, b, f);
	}	
} 
