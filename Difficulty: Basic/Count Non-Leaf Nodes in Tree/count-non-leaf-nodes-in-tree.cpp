/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  public:
    int countNonLeafNodes(Node* r) {
        // Code here
        if(r->left==nullptr && r->right==nullptr) return 0;
        int lc=0;
        int rc=0;
        if(r->left!=nullptr){
            lc=countNonLeafNodes(r->left);
        }
        if(r->right!=nullptr){
            rc=countNonLeafNodes(r->right);
        }
        return lc+rc+1;
    }
};