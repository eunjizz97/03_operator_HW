#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sec;
	int rest;
	
	printf("input the second : ");
	scanf("%d", &sec);
	
	rest = sec % 3600;
	
	printf("the time for %d second is %d : %d : %d", sec, sec/3600, rest/60, rest%60);
	
	return 0;
}
