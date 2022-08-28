/*
You have been given a linked list of integers. Your task is to write a function that inserts 
a node at a given position, 'pos'.
Note:
Assume that the Indexing for the linked list always starts from 0.
If the given position 'pos' is greater than length of linked list, 
then you should return the same linked list without any change. 
And if position 'pos' is equal to length of input linked list, 
then insert the node at the last position.
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

//Method 1
Node* insertNode(Node *head, int i, int data) 
{
	// Write your code here

    //Base Case
    if(head == NULL)
    {
        //insert element
        if(i == 0)
        {
        	Node *newNode = new Node(data);
        	return newNode;
    	}

        //element cannot be inserted so return the orignal list
        return head;
    }

    //Side case for i = 0
    if(i==0)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    }

    //Recursive Call
    Node *smallList = insertNode(head->next,i-1,data);

    //Small Work/Calculation
    head->next = smallList;
    return head;
}

/*
//Method 2
Node* insertNode(Node *head,Node *curr, Node* prev, int i, int data)
{
    if(i == 0)
    {
        Node *newNode = new Node(data);
        if(prev == NULL)
        {
            newNode -> next = head;
            return newNode;
        }
        newNode -> next = curr;
        prev -> next = newNode;
        return head;
    }
    if(curr == NULL)
    {
        return head;
    }
    prev = curr;
    curr = curr -> next;
    return insertNode(head,curr,prev,i-1,data);
}
Node* insertNode(Node *head, int i, int data)
{
	// Write your code here
    return insertNode(head,head,NULL,i,data);
}
*/