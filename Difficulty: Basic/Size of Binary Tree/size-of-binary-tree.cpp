/* Node Structure
class Node {
public:
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    int getSize(Node* r) {
        // code here
        if(r==nullptr) return 0;
        return getSize(r->left)+getSize(r->right)+1;
    }
};