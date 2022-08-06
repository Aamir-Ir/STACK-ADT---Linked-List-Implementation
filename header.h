#include <stdio.h>          
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h> 

/*
    myStack structure consists of the data which is a single integer and the dynamic coonection to the next node in the stack.
*/

typedef struct stack{
    int data; 		       //integer value.
    struct stack * next;   //dynamic connection to the next node in the stack.
}myStack;

// Common Stack ADT Operations (See functions for further explanations).

void StackPush(myStack ** head, myStack ** tail, int item);

int StackPop(myStack ** head, myStack ** tail);

int StackPeek(myStack * head);

bool isEmpty(myStack * head);

int getLength(myStack * head);

// Helper functions (See functions for further explanations).

void freeStack(myStack * head);

void printStack(myStack * head);

int menu();