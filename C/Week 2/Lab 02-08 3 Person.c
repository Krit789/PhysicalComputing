#include <stdio.h>

int main(){
	char fname1[50], sname1[50], person2[50], person3[50];
	scanf("%s\n%s\n%[^\n]\n%[^\n]", fname1, sname1, person2, person3);
	printf("Person 1: %s %s\nPerson 2: %s\nPerson 3: %s", fname1, sname1, person2, person3);
	return 0;
}