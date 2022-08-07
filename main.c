# include "header.h"

int main(int argc, char * argv[])  {
    int input;                          // Keep track of the input.
    int data;                           // Keep track of the search item.
    int dequeue;                            // Keep track of the return of the enqueue function.
    int peek;                           // Keep track of the return of the dequeue function.
    int length;                         // Keep track of the length of the queue
    myQueue * head = NULL;              // Keep track of the head of the queue.
    myQueue * tail = NULL;              // Keep track of the tail of the queue.

    // Menu/Greeting.

    printf("Hello Welcome to my implementation of a QUEUE ADT. Below You will see common operations performed by a Queue ADT.\n");
    input = menu();
    
    // Run the program until the user enters 0 to end it.

    while (input != 0)    {
        
        /*
            IF the number is in range of the menu operations then the program will run the appropriate operation otherwise ask agian
            for a new integer.
        */

        if ((input >= 0) && (input <= 6))    {

            // Operation 1: Enqueue Operation for the Queue ADT.

            if (input == 1) {
                printf("Input the data for the node: ");
                scanf("%d", &data);
                QueueEnqueue(&head, &tail, data);
            }

            // Operation 2: Dequeue Operation for the Queue ADT.

            else if (input == 2)    {

                // Case 1: The queue is empty (head is NULL).

                if (head == NULL)   {
                    printf("Cannot Pop a node in an empty queue.\n");
                }

                // Case 2: The queue is not empty (head is not NULL) so perform the operation.
                
                else    {
                    dequeue = QueueDequeue(&head, &tail);
                    printf("The item that was removed from the head of the queue is: %d.\n", dequeue);
                }
            }

            // Operation 3: Peek Operation for the Queue ADT.

            else if (input == 3)    {

                // Case 1: The queue is empty (head is NULL).

                if (head == NULL)   {
                    printf("Cannot Peek at a node in an empty queue.\n");
                }

                // Case 2: The queue is not empty (head is not NULL).

                else    {
                    peek = QueuePeek(head);
                    printf("The item that is at the head of the queue is: %d.\n", peek);
                }                
            }

            // Operation 4: IsEmpty Operation for the Queue ADT.

            else if (input == 4)    {

                // Case 1: The queue is empty (head is NULL).

                if (isEmpty(head) == true) {
                    printf("The queue is empty.\n");
                }

                // Case 2: The queue is empty (head is NULL).

                else    {
                    printf("The queue is not empty.\n");
                }
            }

            // Operation 5: GetLength Operation for the Queue ADT.

            else if (input == 5)    {
                length = getLength(head);
                printf("The length of the queue is: %d\n", length);
            }

            // Operation 6: Print the queue for the queue ADT.

            else if (input == 6)    {
                printQueue(head);
            }

            // Ask the user for the next operation.

            printf("Previous operation complete. Next command.\n");
            input = menu();
        
        }

        // Invalid integer input ask the user for another integer.

        else{

            // Error Handling for incorrect integer.

            printf("Invalid input please try again.\n");
            input = menu();
        }
    }

    // Free the queue so there are no memory leaks in the program.

    freeQueue(head);

    return 1;
}
