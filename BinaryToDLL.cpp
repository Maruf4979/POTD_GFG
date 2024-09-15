
// Q . // Given a Binary Tree (BT), convert it to a Doubly Linked List (DLL) in place

// Date : 15-09-24

class Solution 
{
  Node*head=NULL,*last=NULL ;   
  void solve(Node*root)
{
  if(root==NULL)
    return;
  solve(root->left);
  if(head==NULL)
   head=root; 
  if(last!=NULL)
  last->right=root;
  root->left=last;
  last=root;
  solve(root->right);
}
  public:
    Node* bToDLL(Node* root) 
    {
         solve(root);
         return head;
    }
};

     // ex
// Input:
          //    1
        //    /  \
       //    3    2
// Output:
// 3 1 2
