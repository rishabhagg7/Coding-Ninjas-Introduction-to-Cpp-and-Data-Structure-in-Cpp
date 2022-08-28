/*
You have been given a singly linked list of integers where the elements are sorted 
in ascending order. Write a function that removes the consecutive duplicate values 
such that the given list only contains unique elements and returns the head to the 
updated list.
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

Node *removeDuplicates(Node *head)
{
    //Write your code here

    // Iterative Approach
    /*
    if(head == NULL || head -> next == NULL)
    {
        return head;
    }
    Node *temp = head;
    Node *t1 = head;
    while(temp -> next != NULL)
    {
        if(temp -> data != temp -> next -> data)
        {
            t1 -> next = temp -> next;
            t1 = temp->next;
        }
        temp = temp -> next;
    }
    t1->next = NULL;
    return head;
    */

    //Recursive Approach

    //Base Case
    if(head == NULL || head -> next == NULL)
    {
        return head;
    }

    //Recursive Call
    Node *smallList = removeDuplicates(head -> next);

    //Small Work / Calculation
    if(smallList -> data == head -> data)
    {
        return smallList;
    }
    head -> next = smallList;
    return head;
}