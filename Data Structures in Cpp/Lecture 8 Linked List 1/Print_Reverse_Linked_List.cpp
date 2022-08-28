/*
You have been given a singly linked list of integers. Write a function to print the 
list in a reverse order.
To explain it further, you need to start printing the data from the tail and move towards 
the head of the list, printing the head data at the end.
Note :
You can’t change any of the pointers in the linked list, just print it in the reverse order.
*/

/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

// For iterative approach we can use stacks

void printReverse(Node *head)
{
    //Write your code here

    //Base Case
    if(head == NULL)
    {
        return;
    }

    //Recursive Call
    printReverse(head -> next);

    //Small Work
    cout << head -> data << " ";
}