/*
Definition for Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    int findMaxFork(Node* root, int k) {
        // code here
        if(root==nullptr) return -1;
        if(root->data<=k){
            int s=findMaxFork(root->right,k);
            if(s!=-1) return s;
            else return root->data;
        }
        else{
            return findMaxFork(root->left,k);
        }
    }
};