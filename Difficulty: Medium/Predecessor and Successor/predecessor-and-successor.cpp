/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<Node*> findPreSuc(Node* root, int k) {
        // code here
        Node *r=root;
        Node* pred=NULL;
        Node* suc=NULL;
        while(r){
            if(r->data==k) r=r->left;
            else if(r->data<k){
                pred=r;
                r=r->right;
            }else{
                r=r->left;
            }
        }
        r=root;
        while(r){
            if(r->data==k) r=r->right;
            else if(r->data>k){
                suc=r;
                r=r->left;
            }else{
                r=r->right;
            }
        }
        return {pred,suc};
    }
};