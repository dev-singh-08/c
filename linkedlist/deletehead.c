void deleteFirst(struct Node **head)
{
    // Check if the list is empty
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    // Store the first node temporarily
    struct Node *temp = *head;

    // Move head to the second node
    *head = (*head)->next;

    // Free the old first node
    free(temp);
}