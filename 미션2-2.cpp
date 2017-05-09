#include <stdio.h>

int main() {
	int rs, h, m, s;
	scanf("%d", &rs);
	h = rs/3600;
	m = rs%3600/60;
	s = rs%60;
	printf("%dΩ√ %d∫– %d√ ", h, m, s);
	return 0;
}
