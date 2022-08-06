# include "header.h"

void StackPush(myStack ** head, myStack ** tail, int item)    {
    myStack * newNode = malloc(sizeof(myStack));
    newNode->next = NULL;
    newNode->data = item;

    /* 
        Case 1: The stack is empty (because head pointes to NULL) therefore both the head and the tail nodes will be made to point to 
        the newNode.
    */

    if (*head == NULL)   {   
        *head = newNode;
        *tail = newNode;
    }

    /* 
        Case 2: The stack is not empty as the head pointer does not point to NULL this means that we prepend to the start of the stack by 
        modifying the the newNode nodes next pointer to the previous head pointer and point the head pointer to the newNode.
    */

    else{
        newNode->next = *head;
        *head = newNode;
    }
}