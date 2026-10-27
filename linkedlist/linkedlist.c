#include <stdio.h>
struct Node {
    int data;
    struct Node*next;
};
int main(){
    struct Nohead;
    struct Node *second;
    struct Node *third;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    head = malloc(sizeof(struct Node));

    head->data=10;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=NULL;
    return 0;
}