#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
	int from, to;
	double length;

	printf("���� �������� [��ȯ�� ����] --> [��ȯ��� ����]�� �����մϴ�.\n");
	printf("[1] ����(m)[2] ��ġ(in)[3] ��Ʈ(ft)[4] �ߵ�(yd)[0] ����(stop) \n");
	printf("\n[��������] --> [��ȯ����], �� ���� �޴� ��ȣ�� �����ϼ���. >> ");
	scanf("%d %d", &from, &to);

	while (from > 0 && to > 0)
	{
		printf("[��ȯ�� ����]�� ���̸� �Է��ϼ���. >>");
		scanf("%lf", &length);
		if (length == 0) break;

		switch (from) {
		case 1:
			printf("\n [���] %.2f(����) -->", length);
			if (to == 1)
				printf("%.2f(����)\n", length);
			else if (to == 2)
				printf("%.2f(��ġ)\n", 39.370079 *length);
			else if (to == 3)
				printf("%.2f(��Ʈ)\n", 3.28084 * length);
			else if (to == 4)
				printf("%.2f(�ߵ�)\n", 1.093613 * length);
			break;

		case 2:
			printf("\n [���] %.2f(��ġ) -->", length);
			if (to == 1)
				printf("%.2f(����)\n", 0.0254 * length);
			else if (to == 2)
				printf("%.2f(��ġ)\n", length);
			else if (to == 3)
				printf("%.2f(��Ʈ)\n", 0.083333 *length);
			else if (to == 4)
				printf("%.2f(�ߵ�)\n", 0.027778 * length);
			break;

		case 3:
			printf("\n [���] %.2f(��Ʈ) -->", length);
			if (to == 1)
				printf("%.2f(����)\n", 0.3848 * length);
			else if (to == 2)
				printf("%.2f(��ġ)\n", 12 * length);
			else if (to == 3)
				printf("%.2f(��Ʈ)\n", length);
			else if (to == 4)
				printf("%.2f(�ߵ�)\n", 0.3333 *length);
			break;

		case 4:
			printf("\n [���] %.2f(�ߵ�) -->", length);
			if (to == 1)
				printf("%.2f(����)\n", 0.9144 *length);
			else if (to == 2)
				printf("%.2f(��ġ)\n", 36 * length);
			else if (to == 3)
				printf("%.2f(��Ʈ)\n", 3 * length);
			else if (to == 4)
				printf("%.2f(�ߵ�)\n", length);
			break;
		}
	};

	printf("�����մϴ�.");

	return 0;

}