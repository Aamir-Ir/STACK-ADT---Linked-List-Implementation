# include "header.h"

int StackPeek(myStack * head)   {

    // Case 1: if the stack is not empty return the data stored in the head node. 

    if (head != NULL)   {
        return head->data;
    }

    // Case 2: if the stack is empty return -1. 

    else{
        return -1;
    }
}