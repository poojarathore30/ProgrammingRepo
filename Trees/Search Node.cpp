bool findNode(struct node* root,int val)
{

if(!root) return false;
else
{
    if(root->val==val) return true;
    else{
        bool l=findNode(root->left,val);
        bool r=findNode(root->right,val);
        return l||r;
    }
}
}

