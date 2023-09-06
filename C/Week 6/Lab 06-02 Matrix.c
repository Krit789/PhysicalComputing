#include <stdio.h>

int main() {
	double matA[3][3], matB[3][3], temp;
	scanf("%lf %lf %lf\n%lf %lf %lf\n%lf %lf %lf", &matA[0][0], &matA[0][1], &matA[0][2],
												   &matA[1][0], &matA[1][1], &matA[1][2],
												   &matA[2][0], &matA[2][1], &matA[2][2]);
	scanf("%lf %lf %lf\n%lf %lf %lf\n%lf %lf %lf", &matB[0][0], &matB[0][1], &matB[0][2],
												   &matB[1][0], &matB[1][1], &matB[1][2],
												   &matB[2][0], &matB[2][1], &matB[2][2]);
	printf("A x B\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			temp = 0;
			for (int k = 0; k < 3; k++) {
				temp += matA[i][k] * matB[k][j];
			}
			printf("%.2lf ", temp);
		}
		printf("\n");
	}
	return 0;
}