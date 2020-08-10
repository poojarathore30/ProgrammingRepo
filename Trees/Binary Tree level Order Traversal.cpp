//logic applied using queue and finally reversing the obtained vector of vector
vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> f;
         if(root==NULL) return f;
        TreeNode * temp;
       
        q.push(root);
        while(1){
            int size=q.size();
            vector<int> v;
            if(q.empty()) break;
            int i=0;
            while(i<size)
            {
               temp=q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                i++;
            }
            f.push_back(v);
        }
        reverse(f.begin(),f.end());
        return f;
    }
