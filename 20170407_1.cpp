#include <stdio.h>

int main() {
	char str[16];
	printf("문자열을 입력주세요(최대 15자): ");
	scanf("%s", str);	//문자열을 입력받아 str 에 저장 
	printf("입력하신 문자열은 \%s\ 입니다.\n", str);
	return 0; 
}
