#include <stdio.h>

#define SIZE 10

// Corrected struct definition and variable name
typedef struct stak {
    int arr[SIZE];
    int top;
} stak;

// Corrected variable name from stack to stk
stak stk;

// Function to check if the stack is empty
int isEmpty() {
    return stk.top == -1;
}

// Function to check if the stack is full
int isFull() {
    return (stk.top == SIZE - 1);
}

// Corrected function name from void POP() to void pop()
void pop() {
    if (!isEmpty()) {
        int item;
        item = stk.arr[stk.top];
        stk.top--;
        printf("Popped: %d\n", item); // Added print statement to display popped item
    } else {
        printf("Stack is empty\n");
    }
}

// Corrected function name from void PUSH(int num) to void push(int num)
void push(int num) {
    if (!isFull()) {
        stk.top++;
        stk.arr[stk.top] = num;
    } else {
        printf("Stack is full\n");
    }
}

// Corrected function name from int peep() to int peek()
int peek() {
    if (isEmpty())
        return stk.arr[stk.top];
    printf("Stack is empty\n");
    return -1;
}

int main() {
   
    push(1);
    push(2);
    push(3);
    pop();
    pop();
    push(4);
    printf("Top element: %d\n", peek());

    return 0;
}
