#include <stdio.h>

int main() {
	int rs, h, m, s;
	scanf("%d", &rs);
	h = rs/3600;
	m = rs%3600/60;
	s = rs%60;
	printf("%d시 %d분 %d초", h, m, s);
	return 0;
}
