#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void display() {
    if (top == -1) {
        printf("\nStack is empty!\n");
        return;
    }

    printf("\nStack Elements (Top to Bottom): ");
    for (int i = top; i >= 0; i--)
        printf("%d ", stack[i]);

    printf("\n");
}

void push() {
    int value;

    if (top == MAX - 1) {
        printf("\nStack Overflow! Cannot push.\n");
        return;
    }

    printf("\nEnter value to push: ");
    scanf("%d", &value);

    printf("\n--- Simulation of PUSH Operation ---\n");
    printf("Placing %d on top of the stack...\n", value);

    stack[++top] = value;

    printf("Pushed %d. New top index = %d.\n", value, top);
}

void pop() {
    if (top == -1) {
        printf("\nStack Underflow! Cannot pop.\n");
        return;
    }

    printf("\n--- Simulation of POP Operation ---\n");
    printf("Removing top element %d from index %d...\n", stack[top], top);

    top--;

    printf("Pop complete. New top index = %d.\n", top);
}

void peek() {
    if (top == -1) {
        printf("\nStack is empty!\n");
        return;
    }

    printf("\n--- Simulation of PEEK Operation ---\n");
    printf("Top element is %d at index %d.\n", stack[top], top);
}

void search() {
    int key;
    printf("\nEnter element to search: ");
    scanf("%d", &key);

    printf("\n--- Simulation of SEARCH in Stack ---\n");

    for (int i = top; i >= 0; i--) {
        printf("Comparing %d with stack[%d] = %d\n", key, i, stack[i]);
        if (stack[i] == key) {
            printf("Element found at index %d.\n", i);
            return;
        }
    }

    printf("Element not found in stack.\n");
}

int main() {
    int choice;

    do {
        printf("\n========= STACK SIMULATION MENU =========\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Search\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: search(); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}
