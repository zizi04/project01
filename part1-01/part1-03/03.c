#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, choice, dump;

	printf("교환할 두 정수를 입력하세요. >> ");
	scanf("%d %d", &x, &y);
	printf("입력한 두 수: x= %d and y= %d \n ", x, y);

	printf("\n임시 저장 장소    이용 방법[1]\n");
	printf("덧셈과 뺄셈으로   교환 방법[2]\n");
	printf("곱셈과 나눗셈으로 교환 방법[3]\n");
	printf("XOR 연산자 ^      이용 방법[4]\n");

	printf("\n위 교환 방법 중 한 번호를 선택하세요. >> ");
	scanf("%d", &choice);

	switch (choice)
	{
	case 1:
		dump = x;
		x = y;
		y = dump;
		break;

	case 2:
		x = x + y;
		y = x - y;
		x = x - y;
		break;

	case 3:
		x = x * y;
		y = x / y;
		x = x / y;
		break;

	case 4:
		x = x ^ y;
		y = x ^ y;
		x = x ^ y;
		break;
	}

	printf("\n 교환한 두 수: x = %d and y = %d\n", x, y);

	return 0;
}
