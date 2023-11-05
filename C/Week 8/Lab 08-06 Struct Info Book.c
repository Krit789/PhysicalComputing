// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// struct student_info {
//     char firstName[61], lastName[61], sex[6], studentID[12];
//     int age;
//     float gpa;
//     };

// int main()
// {
//     struct student_info myInfoBook;
//     scanf("%s %s %s %d %s %f", myInfoBook.firstName, myInfoBook.lastName, myInfoBook.sex, &myInfoBook.age, myInfoBook.studentID, &myInfoBook.gpa);
//     if (!strcmp(myInfoBook.sex, "Male")) {
//         printf("Mr ");
//     } else {
//         printf("Miss ");
//     }
//     printf("%c %s (%d) ID: %s GPA %.2f", toupper(myInfoBook.firstName[0]), myInfoBook.lastName, myInfoBook.age, myInfoBook.studentID, myInfoBook.gpa);
//     return 0;
// }






#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct student_info {
    char name[61], surname[61], sex[7], id[13];
    int age;
    float gpa;
};

int main(){
    struct student_info stuinfo;
    char surname[61] = { 0 };
    scanf("%s %s %s %d %s %f", stuinfo.name, stuinfo.surname, stuinfo.sex, &stuinfo.age, stuinfo.id, &stuinfo.gpa);

    for (int i = 0; i < strlen(stuinfo.sex) - 1; i++) {
        stuinfo.sex[i] = tolower(stuinfo.sex[i]);
    }

    if (strcmp(stuinfo.sex, "male") == 0){
        printf("Mr ");
    } else {
        printf("Miss ");
    }
    for (int i = 0; i < strlen(stuinfo.surname) - 1; i++) {
        if (i == 0) {
            surname[i] = toupper(stuinfo.surname[i]);
        } else {
            surname[i] = tolower(stuinfo.surname[i]);
        }
    }
    printf("%c %s (%d) ID: %s GPA %.2f", toupper(stuinfo.name[0]), surname, stuinfo.age, stuinfo.id, stuinfo.gpa);
    return 0;
}

// Mr A Vejjajiva (21) ID: 59070001 GPA 2.00