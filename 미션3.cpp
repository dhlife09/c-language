#include <stdio.h>

int main() {
	int i1, i2, i3, r1, r2, r3;
	float r4;
	printf(" \n ===============[ ���� ���� ��ȯ�� ]===============\n\n");
	printf(" �� ��ȯ�� ���� �����ΰ���? (1: ����, 2: �ð�, 3: �µ�) ");
	scanf("%d", &i1);
	if ( i1==1 ) {
		printf(" �� ��� ��ȯ�ұ��? (1: cm��inch, 2: inch��cm)" );
		scanf("%d", &i2);
	} else if ( i1==2 ) {
		printf(" �� ��� ��ȯ�ұ��? (1: �ʡ��:��:��) " );
		scanf("%d", &i2);
	} else if ( i1==3) {
		printf(" �� ��� ��ȯ�ұ��? (1: ������ȭ��, 2: ȭ���漷��)" );
		scanf("%d", &i2);
	} else {
		printf(" �� �� �� ���� ��ȣ�Դϴ�. ��");
		return 0;
	}
	printf(" �� ��ȯ�� ���� �Է��ϼ��� : " );
	scanf("%d", &i3);
	
	switch ( i1 ) {
		case 1:
			switch ( i2 ) {
				case 1:
					r4 = i3/2.54;
					printf("\n\n �� �Է��� �� : %d", i3); 
					printf(" �� ��ȯ�� �� : %.2f", r4);
					break;
				case 2:
					r4 = i3*2.54;
					printf("\n\n �� �Է��� �� : %d", i3); 
					printf(" �� ��ȯ�� �� : %.2f", r4);
					break;
			}
			break;
		case 2:
			r1 = i3/3600;
			r2 = i3%3600/60;
			r3 = i3%60;
			printf("\n\n �� �Է��� �� : %d", i3);
			printf(" �� ��ȯ�� �� : %d�� %d�� %d��", r1, r2, r3);
			break;
		case 3:
			switch ( i2 ) {
					case 1:
						r4 = (9.0/5.0)*i3+32;
						printf("\n\n �� �Է��� �� : %d\n", i3);
						printf(" �� ��ȯ�� �� : %.2lf", r4);
						return 0;
						break;
					case 2:
						r4 = (i3-32)/1.8;
						printf("\n\n �� �Է��� �� : %d\n", i3);
						printf(" �� ��ȯ�� �� : %.2lf", r4);
						return 0;
						break;			
		}
	}
	printf("\n\n �� ���� ���� ��ȯ�⸦ �̿��� �ּż� �����մϴ�, ��ſ� �ð� �Ǽ���! ��");
	return 0; 
	}
