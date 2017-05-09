#include <stdio.h>

int main() {
	int i1, i2, i3, r1, r2, r3;
	float r4;
	printf(" \n ===============[ 통합 단위 변환기 ]===============\n\n");
	printf(" ※ 변환할 것은 무엇인가요? (1: 길이, 2: 시간, 3: 온도) ");
	scanf("%d", &i1);
	if ( i1==1 ) {
		printf(" ※ 어떻게 변환할까요? (1: cm→inch, 2: inch→cm)" );
		scanf("%d", &i2);
	} else if ( i1==2 ) {
		printf(" ※ 어떻게 변환할까요? (1: 초→시:분:초) " );
		scanf("%d", &i2);
	} else if ( i1==3) {
		printf(" ※ 어떻게 변환할까요? (1: 섭씨→화씨, 2: 화씨→섭씨)" );
		scanf("%d", &i2);
	} else {
		printf(" ▶ 알 수 없는 번호입니다. ◀");
		return 0;
	}
	printf(" ※ 변환할 값을 입력하세요 : " );
	scanf("%d", &i3);
	
	switch ( i1 ) {
		case 1:
			switch ( i2 ) {
				case 1:
					r4 = i3/2.54;
					printf("\n\n ★ 입력한 값 : %d", i3); 
					printf(" ★ 변환한 값 : %.2f", r4);
					break;
				case 2:
					r4 = i3*2.54;
					printf("\n\n ★ 입력한 값 : %d", i3); 
					printf(" ★ 변환한 값 : %.2f", r4);
					break;
			}
			break;
		case 2:
			r1 = i3/3600;
			r2 = i3%3600/60;
			r3 = i3%60;
			printf("\n\n ★ 입력한 값 : %d", i3);
			printf(" ★ 변환한 값 : %d시 %d분 %d초", r1, r2, r3);
			break;
		case 3:
			switch ( i2 ) {
					case 1:
						r4 = (9.0/5.0)*i3+32;
						printf("\n\n ★ 입력한 값 : %d\n", i3);
						printf(" ★ 변환한 값 : %.2lf", r4);
						return 0;
						break;
					case 2:
						r4 = (i3-32)/1.8;
						printf("\n\n ★ 입력한 값 : %d\n", i3);
						printf(" ★ 변환한 값 : %.2lf", r4);
						return 0;
						break;			
		}
	}
	printf("\n\n ♬ 통합 단위 변환기를 이용해 주셔서 감사합니다, 즐거운 시간 되세요! ♬");
	return 0; 
	}
