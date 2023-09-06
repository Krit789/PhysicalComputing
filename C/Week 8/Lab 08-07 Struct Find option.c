#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Student {
    char firstName[61], lastName[61], sex[7], id[13];
    int age;
    float gpa;
};

int main() {
    char sort[10] = {0};
    struct Student student[20];
    struct Student temp;
    for (int i = 0; i < 20; i++) {
        scanf(" %s %s %s %d %s %f", student[i].firstName, student[i].lastName, student[i].sex, &student[i].age, student[i].id, &student[i].gpa);
    }
    scanf("%s", sort);
    if (tolower(sort[0]) == 'n') { // Sort By Name
        for (int i = 0; i < 20; i++) {
            for (int j = 0; j < 19; j++) {
                if (strcmp(student[j].firstName, student[j + 1].firstName) > 0)
                {
                    temp = student[j];
                    student[j] = student[j + 1];
                    student[j + 1] = temp;
                }
            }
        }
    }
    else if (tolower(sort[0]) == 's') { // Sort By Surname
        for (int i = 0; i < 20; i++) {
            for (int j = 0; j < 19; j++) {
                if (strcmp(student[j].lastName, student[j + 1].lastName) > 0) {
                    temp = student[j];
                    student[j] = student[j + 1];
                    student[j + 1] = temp;
                }
            }
        }
    }
    else if (tolower(sort[0]) == 'i') { // Sort By ID
        for (int i = 0; i < 20; i++) {
            for (int j = 0; j < 19; j++) {
                if (strcmp(student[j].id, student[j + 1].id) > 0) {
                    temp = student[j];
                    student[j] = student[j + 1];
                    student[j + 1] = temp;
                }
            }
        }
    }

    for (int i = 0; i < 20; i++) {
        if (!strcmp(student[i].sex, "Male")) {
            printf("Mr ");
        }
        else {
            printf("Miss ");
        }
        printf("%c %s (%d) ID: %s GPA %.2f\n", toupper(student[i].firstName[0]), student[i].lastName, student[i].age, student[i].id, student[i].gpa);
    }
    return 0;
}