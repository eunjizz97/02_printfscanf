#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char c;
	
	
	printf("enter a character : ");
	scanf("%c", &c);
	
	
	printf("The next charhacter of %c is %c\n", c, c+1);
	
	
	return 0;
}
