/*
You have been given a linked list of integers. 
Your task is to write a function that deletes a node from a given position, 'POS'.
Note :
Assume that the Indexing for the linked list always starts from 0.
If the position is greater than or equal to the length of the linked list, 
you should return the same linked list without any change.
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

Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    
    int index = 0;
    Node *prev = NULL, *temp = head;

    //Finding pos-1 node
    while(temp != NULL && index != pos)
    {
        prev = temp;
        temp = temp -> next;
        index++;
    }

    //pos exceeds length of list
    if(temp == NULL)
    {
        return head;
    }

    //If pos == 0
    if(prev == NULL)
    {
        temp = temp -> next;
        head -> next = NULL;
        delete head; // node deleted
        head = temp; // head updated
    }
    else
    {
        prev -> next = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    return head;
}
