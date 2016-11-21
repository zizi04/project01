#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int menu, x, y;

	printf("[1] 비트 AND(&)\n");
	printf("[2] 비트 OR(|)\n");
	printf("[3] 비트 XOR(^)\n");
	printf("[4] 비트 COMPLEMENT(~)\n");
	printf("[0] 종료(Stop)\n");
	printf("위 연산 중 하나를 선택하세요. >>");
	scanf("%d", &menu);

	switch (menu)
	{
	case 1: case 2: case 3:
		printf("비트 연산할 두 정수 입력 >>");
		scanf("%d %d", &x, &y);
		printf("    x =");
		for (int i = 31; i >= 0; i--)
			printf("%c", ((x >> i) & 1) ? '1' : '0');
		printf("%5d\n", x);

		printf("    y =");
		for (int i = 31; i >= 0; i--)
			printf("%c", ((y >> i) & 1) ? '1' : '0');
		printf("%5d\n", y);

		if (menu == 1) {
			printf("x & y =");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((x & y) >> i & 1) ? '1' : '0');
			}
			printf("%5d\n", x & y);
		}
		else if (menu == 2) {
			printf("x | y =");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((x | y) >> i & 1) ? '1' : '0');
			}
			printf("%5d\n", x | y);
		}
		else if (menu == 3) {
			printf("x ^ y =");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((x ^ y) >> i & 1) ? '1' : '0');
			}
			printf("%5d\n", x ^ y);
		}
		break;

	case 4:
		printf("비트 보수(~) 연산할 하나의 정수 입력 >> ");
		scanf("%d", &x);
		printf("   x =");
		for (int i = 31; i >= 0; i--)
		{
			printf("%c", ((x >> i) & 1) ? '1' : '0');
		}

		printf("\n");

		printf("  ~x =");
		for (int i = 31; i >= 0; i--)
		{
			printf("%c", ((~x >> i) & 1) ? '1' : '0');
		}
		printf("%5d\n", ~x);
		break;

	case 0:
		printf("\n 프로그램을 종료합니다.");
		break;

	}

	return 0;
}