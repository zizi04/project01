#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int prime = 2,c;
	for (int a = 1; a <=10; a++)
	{
		for (int b = 0; b < (10 - a); b++)
			printf("  "); //9칸,8칸,7칸.....띄어쓰기
		for (int i = 0; i < a; i++){ //1개,2개,3개....출력
			while (1){
				for (c = 2; prime%c != 0; c++){ //나누어 떨어지는 수를 찾을 때까지
				}
				if (c == prime){// 나누어 떨어지는 수가 자기 자신 뿐일때
					printf("%3d ", prime);
					break;
				}
				++prime;
			}
			++prime;
		}printf("\n");
	}	
}


				