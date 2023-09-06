#include <stdio.h>
#include <string.h>

struct Book {
    char id[10];
    char name[100];
    char author[100];
};

int main(){
    char searchID[10];
    int count, found = 0;
    struct Book book;
    scanf("%d\n%s", &count, searchID);
    for (int i = 0; i < count; i++) {
        scanf("%s %s %s", book.id, book.name, book.author);
        if (!strcmp(searchID, book.id)){
            found = 1;
            printf("%s %s %s", book.id, book.name, book.author);
        }
    }
    if (!found) printf("Not Found");
    return 0;
}