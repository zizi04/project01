#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int data;
	printf("\n ������ �ϳ� �Է��ϼ���. >> ");
	scanf("%d", &data);

	printf("\n������: ");
	for (int a = 31; a >= 0; a--)
		printf("%c", ((data >> a) & 1) ? '1' : '0');
	printf("\n");

