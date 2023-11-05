#include <stdio.h>
#include <stdlib.h>

struct LinkedList
{
    int data;
    struct LinkedList *next;
};

void llPush(struct LinkedList *head, int data)
{
    struct LinkedList *current = head;
    while (current->next != NULL){
        current = current->next;
    }
    current->next = (struct LinkedList *) malloc(sizeof(struct LinkedList));
    current->next->data = data;
    current->next->next = NULL;
}

int main()
{
    int count, tmp, insIdx, insData, curr = 0;
    scanf("%d", &count);
    struct LinkedList *head = NULL, *tempNext;
    head = (struct LinkedList *) malloc(sizeof(struct LinkedList));
    scanf("%d", &tmp);
    head->data = tmp;
    head->next = NULL;
    for (int i = 0; i < count - 1; i++) {
        scanf("%d", &tmp);
        llPush(head, tmp);
    }
    scanf("%d\n%d", &insIdx, &insData);
    struct LinkedList *current = head;
    tempNext = (struct LinkedList *)malloc(sizeof(struct LinkedList));
    while (current != NULL) {
        if (curr++ == insIdx) {
            tempNext->data = current->data;
            tempNext->next = current->next;
            current->data = insData;
            current->next = tempNext;
            break;
        }
        else if (current->next == NULL) {
            current->next = tempNext;
            tempNext->data = insData;
            tempNext->next = NULL;
            break;
        }
        current = current->next;
    }
    struct LinkedList *current1 = head;
    while (current1 != NULL) {
        printf("%d ", current1->data);
        current1 = current1->next;
    }
    return 0;
}