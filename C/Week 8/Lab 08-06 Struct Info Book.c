#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct student_info {
    char firstName[61], lastName[61], sex[6], studentID[12];
    int age;
    float gpa;
    };

int main()
{
    struct student_info myInfoBook;
    scanf("%s %s %s %d %s %f", myInfoBook.firstName, myInfoBook.lastName, myInfoBook.sex, &myInfoBook.age, myInfoBook.studentID, &myInfoBook.gpa);
    if (!strcmp(myInfoBook.sex, "Male")) {
        printf("Mr ");
    } else {
        printf("Miss ");
    }
    printf("%c %s (%d) ID: %s GPA %.2f", toupper(myInfoBook.firstName[0]), myInfoBook.lastName, myInfoBook.age, myInfoBook.studentID, myInfoBook.gpa);
    return 0;
}