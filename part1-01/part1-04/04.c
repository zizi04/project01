#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int prime = 2,c;
	for (int a = 1; a <=10; a++)
	{
		for (int b = 0; b < (10 - a); b++)
			printf("  "); //9ĭ,8ĭ,7ĭ.....����
		for (int i = 0; i < a; i++){ //1��,2��,3��....���
			while (1){
				for (c = 2; prime%c != 0; c++){ //������ �������� ���� ã�� ������
				}
				if (c == prime){// ������ �������� ���� �ڱ� �ڽ� ���϶�
					printf("%3d ", prime);
					break;
				}
				++prime;
			}
			++prime;
		}printf("\n");
	}	
}


				