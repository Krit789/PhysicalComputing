#include <stdio.h>

int main(){
	char firstName[31], lastName[31], id[9];
	int dobDate, dobMonth, dobYear;
	float gpa;
	scanf("%s\n%s\n%s\n%d/%d/%d\n%f", firstName, lastName, id, &dobDate, &dobMonth, &dobYear, &gpa);
	printf("Fullname: %s %s\nID: %s\nDOB: %02d-%02d-%02d\nGPA: %.2f", firstName, lastName, id, dobDate, dobMonth, dobYear, gpa);
	return 0;
}