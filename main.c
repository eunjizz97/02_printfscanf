#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	float numerator;
	float denominator;
	float division;
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &numerator);
	
	printf("�и� �Է��ϼ��� : ");
	scanf("%d", &denominator);
	
	division= numerator / denominator;

	printf("�������� ����� %f �Դϴ�.\n", division);
	
	
	return 0;
}
