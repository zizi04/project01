#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int menu, x, y;

	printf("[1] ��Ʈ AND(&)\n");
	printf("[2] ��Ʈ OR(|)\n");
	printf("[3] ��Ʈ XOR(^)\n");
	printf("[4] ��Ʈ COMPLEMENT(~)\n");
	printf("[0] ����(Stop)\n");
	printf("�� ���� �� �ϳ��� �����ϼ���. >>");
	scanf("%d", &menu);

	switch (menu)
	{
	case 1: case 2: case 3:
		printf("��Ʈ ������ �� ���� �Է� >>");
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
		printf("��Ʈ ����(~) ������ �ϳ��� ���� �Է� >> ");
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
		printf("\n ���α׷��� �����մϴ�.");
		break;

	}

	return 0;
}