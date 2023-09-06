#include <stdio.h>

int main(){
struct Contact{
     char Phone[12];
     char Mobile[12];
     char Email[30];
};
struct customer{
     int ID;
     char Name[30];
     char Surname[30];
     char Job[30];
     struct Contact contact;
};
struct customer Customer[100];
	return 0;
}	