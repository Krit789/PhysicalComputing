#include <stdio.h>

int main(){
	char string[5];
	scanf("%s", string);
	printf("%.1s%79.0s", string);
	printf("%3.2s%77.0s", string);
	printf("%5.3s%75.0s", string);
	printf("%7.4s%73.0s", string);
	printf("%9.5s%71.0s", string);
	return 0;
}