#include <stdio.h>

int main() {
	int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
	int N[] = {1, 3, 9, 7, 11, 15, 19};
	int temp = 0, chk = 0;
	
	while (1) {
		scanf("%d", &temp);
		if (temp >= 1 && temp <= 20) break;
	}
	for (int i = 0; i < sizeof(M) / sizeof(M[0]); i++) {
		if (M[i] == temp) {
			printf("%d is in M at index [%d]", temp, i);
			chk = 1;
			break;
		}
	}
	
	for (int j = 0; j < sizeof(N) / sizeof(N[0]); j++) {
		if (chk) break;
		if (N[j] == temp) {
			printf("%d is in N at index [%d]", temp, j);
			chk = 1;
			break;
		}
	}
	if (!chk) printf("%d is not in neither M nor N", temp);
	return 0;
}