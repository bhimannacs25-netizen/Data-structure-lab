#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// Function prototypes
void push(int value);
void pop(void);
void display(void);

// Global variables
int stack[SIZE];
int top = -1; // Stack is initially empty

int main(void) {
    int value, choice;

    while (1) {
        printf("\n\n--- MENU ---");
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("\nInvalid input!");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nWrong selection! Try again.");
        }
    }
    return 0;
}

// Push operation to insert an element
void push(int value) {
    if (top == SIZE - 1) {
        printf("\nStack is Full! Insertion is not possible.");
    } else {
        top++;
        stack[top] = value;
        printf("\nInsertion success!");
    }
}

// Pop operation to delete an element
void pop(void) {
    if (top == -1) {
        printf("\nStack is Empty! Deletion is not possible.");
    } else {
        printf("\nDeleted element: %d", stack[top]);
        top--;
    }
}

// Display operation to view elements
void display(void) {
    if (top == -1) {
        printf("\nStack is Empty!");
    } else {
        printf("\nStack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

