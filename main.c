# include "header.h"

int main(int argc, char * argv[])  {
    int input;                          // Keep track of the input.
    int data;                           // Keep track of the search item.
    int pop;                            // Keep track of the return of the pop function.
    int peek;                           // Keep track of the return of the peek function.
    int length;                         // Keep track of the length of the stack
    myStack * head = NULL;              // Keep track of the head of the stack.
    myStack * tail = NULL;              // Keep track of the tail of the stack.

    // Menu/Greeting.

    printf("Hello Welcome to my implementation of a STACK ADT. Below You will see common operations performed by a Stack ADT.\n");
    input = menu();
    
    // Run the program until the user enters 0 to end it.

    while (input != 0)    {
        
        /*
            IF the number is in range of the menu operations then the program will run the appropriate operation otherwise ask agian
            for a new integer.
        */

        if ((input >= 0) && (input <= 6))    {

            // Operation 1: Push Operation for the Stack ADT.

            if (input == 1) {
                printf("Input the data for the node: ");
                scanf("%d", &data);
                StackPush(&head, &tail, data);
            }

            // Operation 2: Pop Operation for the Stack ADT.

            else if (input == 2)    {

                // Case 1: The stack is empty (head is NULL).

                if (head == NULL)   {
                    printf("Cannot Pop a node in an empty stack.\n");
                }

                // Case 2: The stack is not empty (head is not NULL) so perform the operation.
                
                else    {
                    pop = StackPop(&head, &tail);
                    printf("The item that was removed from the head of the stack is: %d.\n", pop);
                }
            }

            // Operation 3: Peek Operation for the Stack ADT.

            else if (input == 3)    {

                // Case 1: The stack is empty (head is NULL).

                if (head == NULL)   {
                    printf("Cannot Peek at a node in an empty stack.\n");
                }

                // Case 2: The stack is not empty (head is not NULL).

                else    {
                    peek = StackPeek(head);
                    printf("The item that is at the head of the stack is: %d.\n", peek);
                }                
            }

            // Operation 4: IsEmpty Operation for the Stack ADT.

            else if (input == 4)    {

                // Case 1: The stack is empty (head is NULL).

                if (isEmpty(head) == true) {
                    printf("The stack is empty.\n");
                }

                // Case 2: The stack is empty (head is NULL).

                else    {
                    printf("The stack is not empty.\n");
                }
            }

            // Operation 5: GetLength Operation for the Stack ADT.

            else if (input == 5)    {
                length = getLength(head);
                printf("The length of the stack is: %d\n", length);
            }

            // Operation 6: Print the stack for the Stack ADT.

            else if (input == 6)    {
                printStack(head);
            }
        }

        // Invalid integer input ask the user for another integer.

        else{

            // Error Handling for incorrect integer.

            printf("Invalid input please try again.\n");
            input = menu();
        }

        // Ask the user for the next operation.

        printf("Previous operation complete. Next command.\n");
        input = menu();
    }

    // Free the stack so there are no memory leaks in the program.

    freeStack(head);

    return 1;
}
