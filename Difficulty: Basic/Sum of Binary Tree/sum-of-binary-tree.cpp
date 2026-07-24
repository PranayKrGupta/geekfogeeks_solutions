/* Tree Node Structure
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int sumBT(Node* r) {
        // code here
        if(r==nullptr) return 0;
        return sumBT(r->left)+sumBT(r->right)+r->data;
    }
};