# include "header.h"

void printStack(myStack * head) {
    int node = 1;

    /*
        If the list is empty state that it is and promt the user to add nodes to display a list.
    */

    if (isEmpty(head) == true)   {
        printf("List is currently empty you need to add nodes to display the list.\n");
        return;
    }

    myStack * curNode = head;                // Create a current pointer make it point to the head pointer.

    // While the current pointer does not hit the end of the list print the data in the node and then traverse the list.

    while (curNode != NULL)    {

        // Case 1: Specify head node.

        if (node == 1)  {
            printf("Node %d (head node): %d.\n", node, curNode->data);      // Print the data. 
        }

        // Case 2: Specify tail node.

        else if (node == getLength(head))   {
            printf("Node %d (tail node): %d.\n", node, curNode->data);      // Print the data.
        }

        // Case 3: Print a node that is not head or tail.

        else{
            printf("Node %d: %d.\n", node, curNode->data);                  // Print the data.
        }

        curNode = curNode->next;                                            // Traverse the list.
        node++;                                                             // Keep track of the node.
    }
}