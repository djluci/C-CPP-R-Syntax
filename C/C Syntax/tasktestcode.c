/**
 * Test code for Stack 
 *
 * Ying Li
 * 08/01/2016
 */

#include "cstk.h"
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
    // creates a stack with a capacity of 20
	Stack *s = stk_create(20);
	
    // declare loop variable
	int i;

    // pushes 10 integers into the stack
	for(i = 0; i < 10; i++) {
		stk_push(s, i+1);
	} 
    // Mark 1 (first memory picture)
	printf("At Mark 1:\n");
    printf("Stack pointer 's' is at: %p\n", (void*)&s); // Address of 's' on the stack
    printf("Array on the heap starts at: %p\n", (void*)s->data); // Address of the heap data

    // Display the stack
	printf("The original list: ");
	stk_display(s, 0); // original order
	
    // Displays the reverse order
	printf("The reversed list: ");
	stk_display(s, 1); // Reverse order
	
    // Frees the stack
	stk_destroy(s);

    // Mark 2 (first memory picture)
    printf("At Mark 2:\n");
    printf("Stack pointer 's' is at: %p\n", (void*)&s); // Address of 's' on the stack
    printf("Heap memory has been freed.\n");
	
	return 0;
}