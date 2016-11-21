#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int data;
	printf("\n 정수를 하나 입력하세요. >> ");
	scanf("%d", &data);

	printf("\n이진수: ");
	for (int a = 31; a >= 0; a--)
		printf("%c", ((data >> a) & 1) ? '1' : '0');
	printf("\n");

