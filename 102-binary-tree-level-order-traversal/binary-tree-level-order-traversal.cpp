class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (root == nullptr) {
            return res;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            int lvlsize = q.size();
            vector<int> tmp;
            
            while (lvlsize--) {
                TreeNode* t = q.front();
                q.pop();
                
                tmp.push_back(t->val); // Agar aapke platform (jaise GFG) par 'data' use hota hai toh t->data likhein
                
                if (t->left != nullptr) {
                    q.push(t->left);
                }
                if (t->right != nullptr) {
                    q.push(t->right);
                }
            }
            res.push_back(tmp); // Har level ka data complete hone ke baad res mein push karein
        }
        
        return res;
    }
};