#include <stdio.h>

double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

int main() {
	char unit;
	double number;
	scanf("%lf %c", &number, &unit);
	(unit == 'c' || unit == 'C') ? printFarenheit(celsiusToFahrenheit(number)) : printCelcius(fahrenheitToCelcius(number));
	return 0;
}

double celsiusToFahrenheit(double celcius){
	return 32 + (celcius * (180.0/100.0));
}

double fahrenheitToCelcius(double fahrenheit){
	return (fahrenheit - 32) / (180.0/100.0);
}

void printFarenheit(double fahrenheit){
	printf("%.2lf f", fahrenheit);
}
void printCelcius(double celcius){
	printf("%.2lf c", celcius);
}