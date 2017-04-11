#include <stdio.h>

int main() {
  char str[100];
  printf("문자열을 입력해 주세요(최대 100자) : ");
  scanf("%s", str);
  printf("\"%s\"", str);
  return 0;
}
