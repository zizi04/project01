#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
	int from, to;
	double length;

	printf("다음 단위에서 [변환할 단위] --> [변환결과 단위]로 연산합니다.\n");
	printf("[1] 미터(m)[2] 인치(in)[3] 피트(ft)[4] 야드(yd)[0] 종료(stop) \n");
	printf("\n[이전단위] --> [변환단위], 두 개의 메뉴 번호를 선택하세요. >> ");
	scanf("%d %d", &from, &to);

	while (from > 0 && to > 0)
	{
		printf("[변환할 단위]의 길이를 입력하세요. >>");
		scanf("%lf", &length);
		if (length == 0) break;

		switch (from) {
		case 1:
			printf("\n [결과] %.2f(미터) -->", length);
			if (to == 1)
				printf("%.2f(미터)\n", length);
			else if (to == 2)
				printf("%.2f(인치)\n", 39.370079 *length);
			else if (to == 3)
				printf("%.2f(피트)\n", 3.28084 * length);
			else if (to == 4)
				printf("%.2f(야드)\n", 1.093613 * length);
			break;

		case 2:
			printf("\n [결과] %.2f(인치) -->", length);
			if (to == 1)
				printf("%.2f(미터)\n", 0.0254 * length);
			else if (to == 2)
				printf("%.2f(인치)\n", length);
			else if (to == 3)
				printf("%.2f(피트)\n", 0.083333 *length);
			else if (to == 4)
				printf("%.2f(야드)\n", 0.027778 * length);
			break;

		case 3:
			printf("\n [결과] %.2f(피트) -->", length);
			if (to == 1)
				printf("%.2f(미터)\n", 0.3848 * length);
			else if (to == 2)
				printf("%.2f(인치)\n", 12 * length);
			else if (to == 3)
				printf("%.2f(피트)\n", length);
			else if (to == 4)
				printf("%.2f(야드)\n", 0.3333 *length);
			break;

		case 4:
			printf("\n [결과] %.2f(야드) -->", length);
			if (to == 1)
				printf("%.2f(미터)\n", 0.9144 *length);
			else if (to == 2)
				printf("%.2f(인치)\n", 36 * length);
			else if (to == 3)
				printf("%.2f(피트)\n", 3 * length);
			else if (to == 4)
				printf("%.2f(야드)\n", length);
			break;
		}
	};

	printf("종료합니다.");

	return 0;

}