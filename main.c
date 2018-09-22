#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	float numerator;
	float denominator;
	float division;
	
	printf("분자를 입력하세요 : ");
	scanf("%d", &numerator);
	
	printf("분모를 입력하세요 : ");
	scanf("%d", &denominator);
	
	division= numerator / denominator;

	printf("나누기의 결과는 %f 입니다.\n", division);
	
	
	return 0;
}
