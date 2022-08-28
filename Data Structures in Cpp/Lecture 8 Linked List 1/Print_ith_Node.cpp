/*
For a given a singly linked list of integers and a position 'i', print the node data at the 'i-th' position.
Note :
Assume that the Indexing for the singly linked list always starts from 0.
If the given position 'i',  is greater than the length of the given singly linked list, 
then don't print anything.
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

void printIthNode(Node *head, int i)
{
    //Write your code here
    int index = 0;
    while(head != NULL)
    {
        if(i == index)
        {
            cout << head -> data;
        }
        head = head -> next;
        index++;
    }
}