/*
Given a singly linked list of integers and position 'i', delete the node present at the 'i-th' 
position in the linked list recursively.
Note :
Assume that the Indexing for the linked list always starts from 0.
No need to print the list, it has already been taken care. Only return the new head to the list.
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

Node *deleteNodeRec(Node *head, int pos) 
{
	//Write your code here

    //Base Case
    if(head == NULL)
    {
        return head;
    }

    //Side case
    if(pos == 0)
    {
        Node *temp = head -> next;
        head -> next = NULL;
        delete head;
        return temp;
    }

    //Recursive Call
    Node *smallList = deleteNodeRec(head -> next, pos - 1);

    //Small Work or calculation
    head -> next = smallList;
    return head;
}