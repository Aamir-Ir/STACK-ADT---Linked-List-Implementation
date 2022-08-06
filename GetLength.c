# include "header.h"

/*
    This function is the GetLength function and it simulates the operation GetLength for the Stack ADT where it returns the size of 
    the linked list.
*/

int getLength(myStack * head)    {
    int count = 0;                   // Set count to 0 this will keep track of the number of nodes in the stack.
    myStack * curNode = head;        // Make curNode point to the head of the stack.

    // While curNode does not hit the end of the stack count each node.

    while (curNode != NULL) {
        count++;                    // Add as it is not null so we have a node.
        curNode = curNode->next;    // Traverse the stack.
    }

    // Return the count.

    return count;
}