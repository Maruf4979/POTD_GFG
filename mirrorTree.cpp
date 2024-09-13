// Q.  Given a Binary Tree, convert it into its mirror.
  // Date - 13-09-24

    void mirror(Node* root) 
    {
         if (root == NULL)
            return;
        Node*temp=root->left;
        root->left=root->right;
        root->right=temp;
        // recursive calls
        mirror(root->left);
        mirror(root->right);
    }

       // ex

// Input:
     //       1
    //     /    \
   //     2       3
//     Output: 3 1 2
//     Explanation: The tree is
//       1      (mirror)         1
//    /    \       =>         /    \
//   2      3                3      2
// The inorder of mirror is 3 1 2
