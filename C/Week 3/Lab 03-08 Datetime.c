#include <stdio.h>

int main(){
	int givenSec, days, hrs, mins;
	scanf("%d", &givenSec);
	printf("%d s = ", givenSec);
	days = givenSec / (60 * 60 * 24);
	givenSec -= days * (60 * 60 * 24);
	hrs = givenSec / (60 * 60);
	givenSec -= hrs * (60 * 60);
	mins = givenSec / 60;
	givenSec -= mins * 60;
	
	printf("%d d %d h %d m %d s", days, hrs, mins, givenSec);
	return 0;
}