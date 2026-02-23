class Solution {
public:
    typedef long long ll;

    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;

        queue<pair<TreeNode*, ll>> que;
        que.push({root, 0});
        ll maxwidth = 0;

        while(!que.empty()) {

            int n = que.size();
            ll minIndex = que.front().second; 

            ll first = 0, last = 0;

            for(int i = 0; i < n; i++) {

                ll idx = que.front().second - minIndex; 
                TreeNode* curr = que.front().first;
                que.pop();

                if(i == 0) first = idx;
                if(i == n-1) last = idx;

                if(curr->left)
                    que.push({curr->left, 2*idx + 1});

                if(curr->right)
                    que.push({curr->right, 2*idx + 2});
            }

            maxwidth = max(maxwidth, last - first + 1);
        }

        return (int)maxwidth;
    }
};