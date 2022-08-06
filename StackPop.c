# include "header.h"

int StackPop(myStack ** head, myStack ** tail)    {
    int headData;
    myStack * sucNode;
    myStack * removedNode;

    // Case 1: Remove the head of the list.

    if (head != NULL)    {
        headData = (*head)->data;
        removedNode = *head;                             // Keep track of the node you want to remove so you can free it.
        sucNode = (*head)->next;
        *head = sucNode;

        /*
            Sub Case: If the head node is the only node in the stack make sure the ail pointer also points to NULL so we meet the 
            conditions for an empty stack. 
        */

        if (sucNode == NULL)    {
            *tail = NULL;
        }

        free(removedNode);                              // Free the node you removed from the linked stack.
        return headData;
    }
    else    {
        headData = -1;
        return headData;
    }
}