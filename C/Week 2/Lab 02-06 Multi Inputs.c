#include <stdio.h>

int main(){
	char line1[31], line2[31], line3[31], line4[31];
	scanf("%s\n%s\n%s\n%s", line1, line2, line3, line4);
	printf("String 1: %.3s\nString 2: %.4s\nString 3: %.5s\nString 4: %.6s", line1, line2, line3, line4);
	return 0;
}