#include <stdio.h>

int main() {
	char str[100];
	printf("당신의 성함:");
	scanf("%s", str);
	printf("\"%s\"님 안녕하세요!", str);
	return 0; 
}
