#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;};

void reverse(struct Node **head)
{
    struct Node *prev = NULL;
    struct Node *current = *head;
    struct Node *next = NULL;

    while (current != NULL)
    {
        // Store the next node
        next = current->next;

        // Reverse the link
        current->next = prev;

        // Move prev forward
        prev = current;

        // Move current forward
        current = next;
    }

    // Update head
    *head = prev;
}
void display(struct Node *head){
     while (head!=NULL)
     {
        printf("%d ->",head->data);
        head=head->next;
     }
     printf('NULL\n');
}
int main(){
    
    return 0;
}