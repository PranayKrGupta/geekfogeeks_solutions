/* Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
    void solve(Node *r,vector<int> &t,vector<vector<int>> &ans){
        t.push_back(r->data);
        if(r->left==nullptr && r->right==nullptr){
            ans.push_back(t);
            t.pop_back();
            return;
        }
        if(r->left!=nullptr)
        solve(r->left,t,ans);
        if(r->right!=nullptr)
        solve(r->right,t,ans);
        t.pop_back();
    }
  public:
    vector<vector<int>> paths(Node* root) {
        // code here
        vector<vector<int>> ans;
        vector<int> temp;
        solve(root,temp,ans);
        return ans;
    }
};