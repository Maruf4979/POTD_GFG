// Q. Given the head of a linked list, the task is to find the middle.
 // Date - 12-09-24
int getMiddle(Node* head) 
    {
      Node*slow=head;
      Node*fast=head;
      if(!head)
      return -1;
      while(fast and fast->next)
      {
          slow=slow->next;
          fast=fast->next->next;      
      }
      return slow->data;
    }

        // ex

// Input: Linked list: 1->2->3->4->5
// Output: 3
