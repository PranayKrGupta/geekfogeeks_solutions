/*Node structure
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};*/

class Solution {
    int maxLeftDepth(Node *r){
        int d=0;
        while(r!=nullptr){
            d++;
            r=r->left;
        }
        return d;
    }
    bool check(Node*r ,int d,int l){
        if(r==nullptr) return true;
        if(l>d) return false;
        if(r->left==nullptr && r->right==nullptr){
            return l==d;
        }
        if(r->left==nullptr || r->right==nullptr){
            return false;
        }
        return check(r->left,d,l+1)&& check(r->right,d,l+1);
    }
  public:
    bool isPerfect(Node *root) {
        // code here
        int d=maxLeftDepth(root);
        return check(root,d,1);
    }
};