//Usual driver code
//struct definition
struct Node{
    int val;
    Node *left,*right;
    Node(int x)
    {
        val=x;
        left=NULL;
        right=NULL;
    }
};
//function to find the height of tree
int height(Node* root)
{
   // Recursive solution
   if(root==NULL) return 0;
   if(root->left==NULL && root->right==NULL) return 1;
   return 1+height(root->left)>1+height(root->right)?1+height(root->left):1+height(root->right);
}
