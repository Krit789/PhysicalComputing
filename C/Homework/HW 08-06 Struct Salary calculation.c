#include <stdio.h>
#include <string.h>

struct Record {
    char id[10], name[100];
    long salary, sales;
};

int main(){
    int i, count, found = 0;
    char searchID[10];
    struct Record records[50];
    scanf("%d", &count);
    for (i = 0; i < count; i++){
        scanf("%s %s %ld %ld", records[i].id, records[i].name, &records[i].salary, &records[i].sales);
    }
    scanf("%s", searchID);
    for (i = 0; i < count; i++){
        if (!strcmp(records[i].id, searchID)){
            found = 1;
            printf("%s\n%s\n%ld\n%.2f\n%ld\n%.2f", records[i].id, records[i].name, records[i].sales, records[i].sales * 0.02, records[i].salary, records[i].salary + (records[i].sales * 0.02));
        }
    }
    if (!found) printf("ID not found !!!");
    return 0;
}