/**
 * Creates a stack library with actions such as creating, pushing, popping,
 * peeking, copying, displaying and destroying the stack
 * 
 * Has proper allocation and deallocation of memory to ensure no memory leaks
 *
 * Duilio Lucio
 * October 13 2024
 */

#include <stdio.h>
#include <stdlib.h>
#include "cstk.h"

// Function that creates a new stack
Stack *stk_create(int capacity) {
    Stack *stk = (Stack*)malloc(sizeof(Stack));
    stk->data = (int*)malloc(sizeof(int) * capacity);
    stk->top = stk->data; // starts with top pointing to the base of stack
    stk->capacity = capacity;
    return stk;
} 

// function to check if stack is empty
int stk_empty(Stack *stk) {
    return (stk->top == stk->data);
}

// function that checks if stack is full
int stk_full(Stack *stk){
    return (stk->top == (stk->data + stk->capacity));
}

// stack that pushes a value onto the stack
void stk_push(Stack *stk, int value) {
    if (stk_full(stk)) {
        printf("Stack is full\n");
    }
    else {
        *(stk->top) = value;
        stk->top++;
    }
}

// function that takes a look at the top value of the stack
int stk_peek(Stack *stk) {
    if (stk_empty(stk)){
        printf("Stack is empty\n");
        return 0;
    }
    else {
        return *(stk->top - 1);
    }
}

// function that pops a value from the stack
int stk_pop(Stack *stk) {
    if (stk_empty(stk)) {
        printf("Stack is empty\n");
        return 0;
    }
    else {
        stk->top--;
        return *(stk->top);
    }
}

// function to display stacks
void stk_display(Stack *stk, int reverse) {
    if (reverse == 1) {
        for (int *ptr = stk->top -1; ptr >= stk->data; ptr--) {
            printf("%d ", *ptr);
        }
    }
    else {
        for (int *ptr = stk->data; ptr < stk->top; ptr++){
            printf("%d ", *ptr);
        }
    }
    printf("\n");
}

// function that destroys the stack and fress the memory
void stk_destroy(Stack *stk) {
    free(stk->data);
    free(stk);
}

// function that copies a stack
Stack* stk_copy(Stack *stk) {
    Stack *new_stack = stk_create(stk->capacity);
    for (int i = 0; i < (stk->top - stk->data); i++) {
        new_stack->data[i] = stk->data[i];
    }
    new_stack->top = new_stack->data + (stk->top - stk->data);
    return new_stack;
}