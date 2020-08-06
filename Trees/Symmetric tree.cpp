//Problem sattement to know if left half and right half subtree are mirror images
bool isMirror(TreeNode * root)
{
    if(root==NULL) return true;
    if(root->left==NULL && root->right==NULL) return true;
    if(root->left==NULL || root->right==NULL) return false;
    return isSameTree(root->left,root->right);
}
//helping function
bool  isSameTree(TreeNode *a,TreeNode* b)
{
    if(a==NULL && b==NULL) return true;
    if(a==NULL || b==NULL) return false;
    if(a->val==b->val) {
        return isSameTree(a->left,b->right)&& isSameTree(a->right,b->left);
    }
    else
    return false;
    }