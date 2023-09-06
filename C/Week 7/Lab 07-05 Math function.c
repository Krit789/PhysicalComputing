#include <stdio.h>

double getValue();
double findMin(double array[], int size);
double findMax(double array[], int size);
double findAvg(double array[], int size);

int main() {
	int n;
    scanf("%d", &n);
    
    double numbers[n];
    for (int i=0; i<n; ++i) {
        numbers[i] = getValue();
    }
    
    double min, max, avg;
    min = findMin(numbers, n);
    max = findMax(numbers, n);
    avg = findAvg(numbers, n);
	printf("%d Values\nMin: %.3lf\nMax: %.3lf\nAvg: %.3lf", n, min, max, avg);
	return 0;
}

double getValue() {
    double value;
    scanf("%lf", &value);
    return value;
}

double findMin(double array[], int size) {
	double min = array[0];
	for (int i = 0; i < size; i++) {
		if (array[i] < min) min = array[i];
	}
	return min;
}

double findMax(double array[], int size) {
	double max = array[0];
	for (int i = 0; i < size; i++) {
		if (array[i] > max) max = array[i];
	}
	return max;
}

double findAvg(double array[], int size){
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += array[i];
	}
	return sum / size + 0.0;
}