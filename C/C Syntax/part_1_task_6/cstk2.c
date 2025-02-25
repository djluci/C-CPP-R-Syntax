/**
 * Creates a stack library with actions such as creating, pushing, popping,
 * peeking, copying, displaying and destroying the stack
 * 
 * Has proper allocation and deallocation of memory to ensure no memory leaks
 *
 * Duilio Lucio
 * October 14 2024
 */

#include "cstk2.h"

// Function that creates new stack with given capacity
Stack *stk_create(int capacity) {
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->data = (void **)malloc(sizeof(void *) * capacity);
    stack->top = stack->data;
    stack->capacity = capacity;
    return stack;
}

// function that destroys the stack leading to freeing the memory
void stk_destroy(Stack *stack) {
    free(stack->data); // Frees the allocated memory for data
    free(stack); // Frees the stack itseld
}

// Function to return the number of items in the stack
int stk_size(Stack *stack) {
    return stack->top - stack->data; // # of items in the stack is difference between top pointer and base 
}

// Function that will push an item into the stack
void stk_push(Stack *stack, void *item) {
    if (stk_size(stack) == stack->capacity) {
        printf("Stack is full, cannot push item.\n");
        return;
    }
    *(stack->top) = item;
    stack->top++;
}

// Function that will make it so you can peek at the top of the stack without removing the item
void *stk_peek(Stack *stack) {
    if (stk_size(stack) == 0) {
        printf("Stack is empty, nothing to peek at.\n");
        return NULL;
    }
    return *(stack->top - 1); // top item is before the top pointer
}

// Function that pops the top item out of the stack
void *stk_pop(Stack *stack) {
    if (stk_size(stack) == 0) {
        printf("Stack is empty, nothing to pop.\n");
        return NULL;
    }
    stack->top--;
    return *(stack->top); // returns item and moves the pointer down
}

// Function that creates a string representation of the stack
char *stk_toString(Stack *stack, char *(*toString)(void *)) {
    int size = stk_size(stack);
    char *result = (char *)malloc(1024 * sizeof(char)); // allocates the memory for the string result
    strcpy(result, "[");
    for (int i = 0; i < size; i++) {
        char *itemString = toString(stack->data[i]);
        strcat(result, itemString);
        free (itemString); // Frees the temporary string returned by toString

        if (i < size - 1) {
            strcat(result, ", "); // Seperates items
        }
    }
    strcat(result, "]");
    return result;
}