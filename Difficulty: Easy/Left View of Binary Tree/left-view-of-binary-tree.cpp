/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
    void view(Node* n,int h,vector<int> &ans){
        if(n==nullptr) return;
        if(h==ans.size()){
            ans.push_back(n->data);
        }
        view(n->left,h+1,ans);
        view(n->right,h+1,ans);
    }
  public:
    vector<int> leftView(Node *root) {
        // code here
        vector<int> ans;
        view(root,0,ans);
        return ans;
    }
};