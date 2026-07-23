/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* r) {
        // write code here
        if(r->left==nullptr && r->right==nullptr){
            return 1;
        }
        int lc=0;
        int rc=0;
        if(r->left!=nullptr){
            lc=countLeaves(r->left);
        }
        if(r->right!=nullptr){
            rc=countLeaves(r->right);
        }
        return lc+rc;
    }
};