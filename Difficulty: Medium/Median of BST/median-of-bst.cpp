/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
    int cnt(Node *rt){
        if(rt==nullptr) return 0;
        return cnt(rt->left) + cnt(rt->right) +1;
    }
    int med(Node* r,int k,int &i){
        if(r==nullptr){
            return 0;
        }
        int l=med(r->left,k,i);
        if(l) return l;
        i++;
        if(i==k){
            return r->data;
        }
        int rr= med(r->right,k,i);
        if(rr) return rr;
        return 0;
    }
  public:
    int findMedian(Node* root) {
        // Code here
        int c = cnt(root);
        int i=0;
        if(c%2==0){
            return med(root,c/2,i);
        }else{
            return med(root,(c+1)/2,i);
        }
    }
};