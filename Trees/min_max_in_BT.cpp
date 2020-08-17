int findMax(struct node* root)
{

int max=INT_MIN;
queue<struct node*> q;
if(root) 
{q.push(root);
struct node *temp;
while(!q.empty())
{
   temp=q.front();
   q.pop();
   if(temp->left) q.push(temp->left);
   if(temp->right) q.push(temp->right);
   max=max<temp->data? temp->data:max;
}
}
return max;
}

// Returns minimum value in a given Binary Tree
int findMin(struct node* root)
{

int min=INT_MAX;
queue<struct node*> q;
if(root) 
{q.push(root);
struct node *temp;
while(!q.empty())
{
   temp=q.front();
   q.pop();
   if(temp->left) q.push(temp->left);
   if(temp->right) q.push(temp->right);
   min=min>temp->data? temp->data:min;
}
}
return min;


}