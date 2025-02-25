#ifndef CSTK_H
#define CSTK_H

// Define the Stack structure
typedef struct Stack {
    int *data;      // Pointer to the stack's data
    int *top;       // Points to the next insertion point in the stack
    int capacity;   // Maximum size of the stack
} Stack;

// Function prototypes
Stack* stk_create(int capacity);
int stk_empty(Stack *stk);
int stk_full(Stack *stk);
void stk_push(Stack *stk, int value);
int stk_peek(Stack *stk);
int stk_pop(Stack *stk);
void stk_display(Stack *stk, int reverse);
void stk_destroy(Stack *stk);
Stack* stk_copy(Stack *stk);

#endif