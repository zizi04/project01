#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, choice, dump;

	printf("��ȯ�� �� ������ �Է��ϼ���. >> ");
	scanf("%d %d", &x, &y);
	printf("�Է��� �� ��: x= %d and y= %d \n ", x, y);

	printf("\n�ӽ� ���� ���    �̿� ���[1]\n");
	printf("������ ��������   ��ȯ ���[2]\n");
	printf("������ ���������� ��ȯ ���[3]\n");
	printf("XOR ������ ^      �̿� ���[4]\n");

	printf("\n�� ��ȯ ��� �� �� ��ȣ�� �����ϼ���. >> ");
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

	printf("\n ��ȯ�� �� ��: x = %d and y = %d\n", x, y);

	return 0;
}
