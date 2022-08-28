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
int findNode(Node *head, int n){
    
    // Write your code here.
    
    //Iterative Method
    /*
    int index = 0;
    while(head != NULL){
        if(head -> data == n){
            return index;
        }
        index++;
        head = head -> next;
    }
    return -1;
    */
    
    
    //Recursion Method

    //Base Case
    if(head == NULL)
    {
        return -1;
    }
    if(head -> data == n)
    {
        return 0;
    }

    //Recursion Call
    int smallCheck = findNode(head -> next, n);

    //Small Work
    if(smallCheck == -1)
    {
        return smallCheck;
    }
    return 1 + smallCheck;