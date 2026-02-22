class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL)
            return {};
        
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        
        q.push(root);  
        
        bool leftToRight = true;
        
        while(!q.empty()){
            
            int size = q.size();
            vector<int> temp(size);
            
            for(int i = 0; i < size; i++){
                
                TreeNode* node = q.front();
                q.pop();
                
                int index;
                if(leftToRight)
                    index = i;
                else
                    index = size - 1 - i;
                
                temp[index] = node->val;
                
                if(node->left)
                    q.push(node->left);
                    
                if(node->right)
                    q.push(node->right);
            }
            
            leftToRight = !leftToRight;
            ans.push_back(temp);
        } 
        
        return ans;
    }
};