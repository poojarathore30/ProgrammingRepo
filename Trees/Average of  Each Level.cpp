vector<double> averageOfLevels(TreeNode* root) {
        vector<double> f;
        queue<TreeNode*> q;
        double res;
        if(root==NULL) return f;
        TreeNode *temp;
        
        //level order traversal using queue
        q.push(root);
        while(1)
        {
            double sum=0;
            int size=q.size();
            int i=0;
            if(q.empty()) break;
            while(i<size)
            {
                temp=q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                sum+=temp->val;
                i++;
            }
            res=(double)sum/size;
            f.push_back(res);
        }
        return f;
    }
