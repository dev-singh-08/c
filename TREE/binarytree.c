#include <stdio.h>

#define MAX_SIZE 15
#define EMPTY -1

int tree[MAX_SIZE];

// Initialize all array slots as empty
void initTree() {
    for (int i = 0; i < MAX_SIZE; i++) {
        tree[i] = EMPTY;
    }
}

// Set the root node
void setRoot(int value) {
    if (tree[0] != EMPTY) {
        printf("Root already exists.\n");
    } else {
        tree[0] = value;
    }
}

// Set the left child of a given parent index
void setLeft(int value, int parentIndex) {
    int leftIndex = (2 * parentIndex) + 1;
    if (parentIndex >= MAX_SIZE || tree[parentIndex] == EMPTY) {
        printf("Cannot set left child: parent does not exist.\n");
    } else if (leftIndex >= MAX_SIZE) {
        printf("Cannot set left child: index out of bounds.\n");
    } else {
        tree[leftIndex] = value;
    }
}

// Set the right child of a given parent index
void setRight(int value, int parentIndex) {
    int rightIndex = (2 * parentIndex) + 2;
    if (parentIndex >= MAX_SIZE || tree[parentIndex] == EMPTY) {
        printf("Cannot set right child: parent does not exist.\n");
    } else if (rightIndex >= MAX_SIZE) {
        printf("Cannot set right child: index out of bounds.\n");
    } else {
        tree[rightIndex] = value;
    }
}

// Inorder traversal (Left -> Root -> Right)
void inorder(int index) {
    if (index >= MAX_SIZE || tree[index] == EMPTY) {
        return;
    }
    inorder((2 * index) + 1);
    printf("%d ", tree[index]);
    inorder((2 * index) + 2);
}

// Print the raw underlying array
void printArray() {
    for (int i = 0; i < MAX_SIZE; i++) {
        if (tree[i] != EMPTY) {
            printf("%d ", tree[i]);
        } else {
            printf("- ");
        }
    }
    printf("\n");
}

int main() {
    initTree();

    /* Constructing the following tree:
              10
             /  \
           20    30
          /  \     \
        40    50    60
    */
    setRoot(10);        // Index 0
    setLeft(20, 0);     // Index 1
    setRight(30, 0);    // Index 2
    setLeft(40, 1);     // Index 3
    setRight(50, 1);    // Index 4
    setRight(60, 2);    // Index 6 (Index 5 remains empty)

    printf("Array representation: ");
    printArray();

    printf("Inorder traversal: ");
    inorder(0);
    printf("\n");

    return 0;
}
