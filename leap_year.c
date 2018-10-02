#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1, num2, num3;
	
	printf("input three numbers : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	printf("The mean of %d %d %d is : %f", 
						num1, num2, num3, (double)(num1 + num2 + num3) /3);
	
	return 0;
}
