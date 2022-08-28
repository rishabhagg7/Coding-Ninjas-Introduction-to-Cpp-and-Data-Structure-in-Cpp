/*
For a given singly linked list of integers, find and return its length. Do it using an iterative method.
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

int length(Node *head)
{
    //Write your code here
    int len = 0;
    while(head != NULL)
    {
        len++;
        head = head -> next;
    }
    return len;
}
