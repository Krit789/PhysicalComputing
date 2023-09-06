#include <stdio.h>

int main(){
	int levels, steps = 1, f1 = 0, f2 = 1;
	scanf("%d", &levels);
	for (int i = 2; i <= levels; ++i) {
		f1 = f2;
		f2 = steps;
		steps = f1 + f2;
	}
	printf("method = %d", steps);
	return 0;
}

