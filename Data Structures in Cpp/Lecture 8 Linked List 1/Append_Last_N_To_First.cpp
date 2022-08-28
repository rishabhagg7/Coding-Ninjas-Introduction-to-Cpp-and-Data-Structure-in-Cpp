/*
You have been given a singly linked list of integers along with an integer 'N'. 
Write a function to append the last 'N' nodes towards the front of the singly linked list 
and returns the new head to the list.
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
    Node *temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
    int len = length(head),index = 0;
    Node *newHead = head, *temp = head, *tail, *prev = NULL, *newTail = NULL;
    
    while(temp != NULL)
    {
        // To get NewHead and NewTail
        if(index == len - n)
        {
            newHead = temp;
            newTail = prev;
        }

        // To get Last Node
        if(temp -> next == NULL)
        {
            tail = temp;
        }

        // Update prev,temo,index
        prev = temp;
        temp = temp -> next;
        index++;
    }

    // Appending two lists
    if(tail != NULL && newTail != NULL)
    {
        tail -> next = head;
        newTail -> next = NULL;
    }
    return newHead;
}

