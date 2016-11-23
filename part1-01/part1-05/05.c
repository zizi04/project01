#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int data,n=7,hexa,flag=0;
	printf("\n 정수를 하나 입력하세요. >> ");
	scanf("%d", &data);

	printf("\n이진수: ");
	for (int a = 31; a >= 0; a--)
		printf("%c", ((data >> a) & 1) ? '1' : '0');
	printf("\n");

	printf("\n8진수: ");
	int temp = data;
	int octal = 0;
	int i = 1;
	while (temp)
	{
		int rem = temp % 8;
		temp /= 8;
		octal += rem * i;
		i *= 10;
	}
	printf("%32d", octal);
	printf("%8o\n", data);

	
	
	printf("\n");

	printf("\n16진수: ");
	printf("%30x    ", data);
	for (unsigned int mask = 0xF0000000;mask>0;){
		hexa = (data&mask)>>(4*n--);
		if (hexa != 0) flag = 1;
		if(flag) printf("%x",hexa);
		mask = mask >> 4;
	}
	printf("\n");
}