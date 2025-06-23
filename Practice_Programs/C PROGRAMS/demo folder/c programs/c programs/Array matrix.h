#include <stdio.h>
#include <limits.h>

#define SIZE 10

int s[SIZE], top = -1;

void push(int);
int pop();
void display();
int peek(); // Declaration for the peek function

int main() {
    int choice, val;

    do {
        printf("\nEnter your choice:\n 1. push \n 2. pop  \n 3. display\n4. Peek\n 5.Exit\n");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter the value to be pushed on the stack\n");
            scanf("%d", &val);
            push(val);
            break;
        case 2:
            val = pop();
            if (val != INT_MIN)
                printf("Element deleted from stack is %d", val);
            break;
        case 3:
            display();
            break;
        case 4:
            val = peek();
            if (val != -1)
                printf("Top of the stack is %d", val);
            break;
        }
    } while (choice != 5);

    getchar(); // Wait for user input before exiting
    return 0;
}

void push(int val) {
    if (top == SIZE - 1) {
        printf("Stack is full\n");
    } else {
        top++;
        s[top] = val;
    }
}

int pop() {
    int val;
    if (top == -1) {
        printf("Stack is empty\n");
        return INT_MIN;
    } else {
        val = s[top];
        top--;
        return val;
    }
}

void display() {
    int i;
    if (top == -1)
        printf("Stack is empty\n");
    else {
        printf("Stack elements:\n");
        for (i = top; i >= 0; i--)
            printf("%d\n", s[i]);
    }
}

int peek() {
    if (top == -1) {
        printf("Stack is empty\n");
        return -1;
    } else {
        return s[top];
    }
}

