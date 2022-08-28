/*
You have been given a head to a singly linked list of integers. 
Write a function check to whether the list given is a 'Palindrome' or not.
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

bool isPalindrome(Node *head)
{
    //Write your code here

    //For iterative approach stacks would be better to use
    
    //Base Case
    if(head == NULL || head -> next == NULL)
    {
        return true;
    }
    Node *temp = head, *prev = NULL;

    //Iterate to get last element
    while(temp -> next != NULL)
    {
        prev = temp;
        temp = temp -> next;
    }

    //Check or small calculation or work
    if(head -> data != temp -> data)
    {
        return false;
    }
    prev -> next = NULL;

    //Recursive Call
    return isPalindrome(head->next);
}