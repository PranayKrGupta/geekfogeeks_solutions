/* Structure of a Tree Node
class Node {
public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    bool isSumProperty(Node *r) {
        // code here
        if(r==nullptr) return true;
        if(r->left==nullptr && r->right==nullptr) return true;
        if(r->left==nullptr && r->right->data!=r->data) return false;
        if(r->right==nullptr && r->left->data!=r->data) return false;
        if(r->left!=nullptr && r->right!=nullptr && r->left->data+r->right->data!=r->data) return false;
        return isSumProperty(r->left) && isSumProperty(r->right);
    }
};