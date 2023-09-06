#include <stdio.h>

int main(){
	char a, b, c, d, e;
	// scanf("%c\n%c\n%c\n%c\n%c", a, b, c, d, e);
	scanf("%c\n", &a);
	scanf("%c\n", &b);
	scanf("%c\n", &c);
	scanf("%c\n", &d);
	scanf("%c", &e);
	int _a = a;
	int _c = c;
	int _e = e;
	
	a = _a + 1;
	c = _c + 1;
	e = _e + 1;
	printf("%c\n%c\n%c\n%c\n%c\n", a, b, c, d, e);
	return 0;
}